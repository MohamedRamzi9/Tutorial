#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <coroutine> // for coroutines

import Module;

struct S {
	int x = 9;
	operator bool() {
		return x != 0;
	}
};

int main() {
	rmz::println("module var {}", module_variable);
}