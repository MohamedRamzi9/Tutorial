#include "rmz_print.hpp"
#include <limits>
#include <iostream>
#include <string>
#include <vector>
#include <coroutine> // for coroutines

struct Awaitable { // awaitable type, returned by the co_await expression
	bool await_ready() { return false; } // returns true if the coroutine should be suspended, false if it should continue, it is called when the co_await expression is evaluated
	// void await_suspend(std::coroutine_handle<>) {} // called when the coroutine is suspended, takes the coroutine handle as an argument, can be used to resume the coroutine later, the void version does not return a value
	// bool await_suspend(std::coroutine_handle<>) { return true; } // this version may further decide to suspend the coroutine and return true, or resume it and return false
	std::coroutine_handle<> await_suspend(std::coroutine_handle<>) { return {}; } // this version returns another coroutine handle, which will be resumed in place of the current coroutine which will be suspended
	// void await_resume() {} // called when the coroutine is resumed both if it was suspended or not, this version does not return a value
	int await_resume() { return 0; } // this version returns a value
};

int main() {
	
}