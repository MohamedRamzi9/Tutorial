#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>


#define debug_flag

[[nodiscard]] constexpr int add(int a, int b) noexcept {
#ifdef debug_flag
	constexpr int MAX_INT = std::numeric_limits<int>::max();
	constexpr int MIN_INT = std::numeric_limits<int>::min();
	if (a > 0 and b > MAX_INT - a or b > 0 and a > MAX_INT - b) {
		rmz::println("Warning: Adding {} and {} will overflow", a, b);
		std::terminate();
	} else if (a < 0 and b < MIN_INT - a or b < 0 and a < MIN_INT - b) {
		rmz::println("Warning: Adding {} and {} will underflow", a, b);
		std::terminate();
	}	
#endif

	return a + b;
}

[[nodiscard]] constexpr std::string read_string() {
	std::string input;
	std::getline(std::cin, input);
	return input;
}

void app() {
#ifdef debug_flag
	static_assert(add(1, 2) == 3, "add(1, 2) should be 3");
#endif

	rmz::println("Enter first operand: ");
	std::string op1_input = read_string();
	rmz::println("Enter second operand: ");
	std::string op2_input = read_string();

#ifdef debug_flag
	if (not std::all_of(op1_input.begin(), op1_input.end(), ::isdigit)) {
		rmz::println("Error: First operand '{}' is not a valid integer", op1_input);
		std::terminate();
	} else if (not std::all_of(op2_input.begin(), op2_input.end(), ::isdigit)) {
		rmz::println("Error: Second operand '{}' is not a valid integer", op2_input);
		std::terminate();
	}
#endif


	int op1 = std::stoi(op1_input);
	int op2 = std::stoi(op2_input);
	int result = add(op1, op2);
	rmz::println("Result of adding {} and {} is: {}", op1, op2, result);		
}

int main() {

	switch (3) {
		case 3:
		rmz::println("Case 3");
		goto _3_and_4;

		case 4:
		rmz::println("Case 4");
		goto _3_and_4;

		_3_and_4:
		rmz::println("Switch case example");
		break;

		case 8:
		rmz::println("Case 8");
		break;
	}

}