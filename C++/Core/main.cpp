#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <coroutine> // for coroutines

struct S {int x, y, z;};

int main() {

	auto [a, _, _] = S{1, 2, 3}; // structured binding to unpack S into pack

}