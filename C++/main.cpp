#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <coroutine> // for coroutines


int main() {
	auto lambda = []<class T>{};
	lambda.operator()<int>();

}