#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <coroutine> // for coroutines

struct S {
	S(const S& s) {
		rmz::println("copy constructor called");
	}
	S() = default;
};

int main() {

	S x;
	auto y = auto{S()}; 

}