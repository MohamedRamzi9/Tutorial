#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <coroutine> // for coroutines



int main() {
#define C() 12 * 4
#if C() == 42
	rmz::println("C() is 48");
#endif

}