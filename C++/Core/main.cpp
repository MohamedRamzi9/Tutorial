#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <coroutine> // for coroutines

struct S {
	int x = 9;
	operator bool() {
		return x != 0;
	}
};

int main() {
	if (auto&& [x] = S{}) {
		rmz::print("x: {}\n", x);
	}
}