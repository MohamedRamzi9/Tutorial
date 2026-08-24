
// continue from https://youtu.be/8uiZC0l4Ajw?si=fqBE-A_c9HuQvzmc&t=1871

// ==============================
// ========== PACKAGES ==========
// ==============================

// Main Package
package main // used in the main file to indicate that this is the entry point of the program
package folder // used in every other file which must be the same name as the folder the file is in


// Importing Packages
import "fmt" // single package import, imports the package with the specified name
import ( // multiple package import, imports the packages in between the parentheses, each package must be in a new line
	"time"
	"sync"
)



// ===================================
// ========== MAIN FUNCTION ==========
// ===================================

func main() { // the main function is the entry point of the program, { must be in the same line as the function declaration
} 



// ===============================
// ========== VARIABLES ==========
// ===============================

// Declaration
var variable int = 10  // variable declaration with a type and initialization, type is optional and can be infered if the variable is initialized, initialization is optional
const constant int = 10 // constant declaration with a type and initialization, type is optional and can be infered since intialization is mandatory
variable := 10 // short variable declaration, can only be used inside functions, type is inferred
var variable1, variable2 = 10, "Hello" // multiple variable declaration with initialization, types are inferred for each variable
var variable1, variable2 int = 10, 20 // multiple variable declaration with initialization and one type at the end, type is optional if all variables are initialized

// Types
var variable int // signed integer variable, is at least 32 bits in size, depends of the system, default initialized to 0
var variable int8 // 8-bit signed integer variable, range: [-128, 128[, default initialized to 0
var variable int16 // 16-bit signed integer variable, range: [-2^15, 2^15[, default initialized to 0
var variable int32 // 32-bit signed integer variable, range: [-2^31, 2^31[, default initialized to 0
var variable int64 // 64-bit signed integer variable, range: [-2^63, 2^63[, default initialized to 0
var variable uint // unsigned integer variable, is at least 32 bits in size, depends of the system, default initialized to 0
var variable uint8 // 8-bit unsigned integer variable, range: [0, 256[, default initialized to 0
var variable uint16 // 16-bit unsigned integer variable, range: [0, 2^16[, default initialized to 0
var variable uint32 // 32-bit unsigned integer variable, range: [0, 2^32[, default initialized to 0
var variable uint64 // 64-bit unsigned integer variable, range: [0, 2^64[, default initialized to 0
var variable float32 // 32-bit floating-point variable, default initialized to 0
var variable float64 // 64-bit floating-point variable, default initialized to 0
var variable bool // boolean variable, can only be true or false, default initialized to false
var variable string // string variable, default initialized to "", strings are immutable
var variable byte // alias for uint8, default initialized to 0
var variable rune // alias for int32, default initialized to 0, represents a Unicode code point
var variable complex64 // 64-bit complex number variable, default initialized to (0+0i)
var variable complex128 // 128-bit complex number variable, default initialized to (0+0i)
var variable error // error variable, default initialized to nil, used to represent an error condition
var array [4]int // array variable, fixed size, default initialized to the default value of the type
var slice []int // slice variable, dynamic size, default initialized to 🔴🔴🔴
var map_ [string]int // map variable, key-value pairs, default initialized to 🔴🔴🔴
var pointer *int // pointer variable, can be any type above or user defined types, default initialized to nil, can be used to store the address of a variable of the same type

[2]int{4, 5} // creates a temporary array for use in assignement or function call, the size must match the number of elements
[...]int{4, 5} // same as above but the size is inferred from the number of elements
[]int{4, 5} // creates a temporary slice for use in assignement or function call
map[string]int{"key1": 1, "key2": 2} // creates a temporary map for use in assignement or function call



// ===============================
// ========== OPERATORS ==========
// ===============================

// Arithmetic Operators
var addtion = 12 + 5 // addition operator, adds two operands of same numeric type or concatenates two string types
var subtraction = 12 - 5 // subtraction operator, subtracts two operands of same numeric type
var multiplication = 12 * 5 // multiplication operator, multiplies two operands of same numeric type
var division = 12 / 5 // division operator, divides two operands of same numeric type, if both operands are integers the result will be an integer with the decimal part truncated
var modulus = 12 % 5 // modulus operator, returns remainder of division of two operands of same integer type

// Comparison Operators
var equal = 2 == 2 // equal operator, returns true if both operands are equal
var not_equal = 2 != 2 // not equal operator, returns true if both operands are not equal
var greater_than = 2 > 2 // greater than operator, returns true if the left operand is greater than the right operand
var less_than = 2 < 2 // less than operator, returns true if the left operand is less than the right operand
var greater_than_or_equal = 2 >= 2 // greater than or equal operator, returns true if the left operand is greater than or equal to the right operand
var less_than_or_equal = 2 <= 2 // less than or equal operator, returns true if the left operand is less than or equal to the right operand

// Logical Operators
var logical_and = true && false // logical AND operator, returns false if first operand is false or both operands are false, otherwise returns true
var logical_or = true || false // logical OR operator, returns true if first operand is true or both operands are true, otherwise returns false
var logical_not = !true // logical NOT operator, returns true if operand is false, otherwise returns false

// Bitwise Operators
var bitwise_and = 12 & 5 // bitwise AND operator, performs bitwise AND on two operands of same integer type
var bitwise_or = 12 | 5 // bitwise OR operator, performs bitwise OR on two operands of same integer type
var bitwise_xor = 12 ^ 5 // bitwise XOR operator, performs bitwise XOR on two operands of same integer type
var bit_clear = 12 &^ 5 // bit clear operator, performs bit clear on two operands of same integer type, clears the bits of the first operand which are set to 1 in the second operand
var left_shift = 12 << 2 // left shift operator, shifts the bits of the first operand to the left by the number of bits specified by the second operand, fills the vacated bits with 0
var right_shift = 12 >> 2 // right shift operator, shifts the bits of the first operand to the right by the number of bits specified by the second operand, fills the vacated bits with 0 for unsigned integers and with the sign bit for signed integers

// Assignment Operators
variable++ // increment operator, increases value of variable by 1 and returns the value before incrementing 🔴🔴🔴
variable-- // decrement operator, decreases value of variable by 1 and returns the value before decrementing 🔴🔴🔴
variable += 5 // addition assignment operator, adds the right operand to the left operand and assigns the result to the left operand
variable -= 5 // subtraction assignment operator, subtracts the right operand from the left operand and assigns the result to the left operand
variable *= 5 // multiplication assignment operator, multiplies the left operand by the right operand and assigns the result to the left operand
variable /= 5 // division assignment operator, divides the left operand by the right operand and assigns the result to the left operand
variable %= 5 // modulus assignment operator, takes the modulus of the left operand by the right operand and assigns the result to the left operand
variable &= 5 // bitwise AND assignment operator, performs bitwise AND on the left operand with the right operand and assigns the result to the left operand
variable |= 5 // bitwise OR assignment operator, performs bitwise OR on the left operand with the right operand and assigns the result to the left operand
variable ^= 5 // bitwise XOR assignment operator, performs bitwise XOR on the left operand with the right operand and assigns the result to the left operand
variable &^= 5 // bit clear assignment operator, performs bit clear on the left operand with the right operand and assigns the result to the left operand
variable <<= 5 // left shift assignment operator, performs left shift on the left operand by the number of bits specified by the right operand and assigns the result to the left operand
variable >>= 5 // right shift assignment operator, performs right shift on the left operand by the number of bits specified by the right operand and assigns the result to the left operand

"string1" + "string2" // string concatenation operator, concatenates two strings and returns a new string

&variable // address operator, returns the address of the variable or array element

variable := array[0] // array and string subscript operator, used to access the elements of an array or string at the specified index, must not be out of bounds 
array[1:3] // array slice operator, returns a new slice containing the elements [start, end)
slice... 🔴🔴🔴 // spread operator on slices, where to use is !

variable := map["key"] // map subscript operator, used to access the value of a map at the specified key, returns the default value of the value type if the key does not exist
variable, ok := map["key"] // same as above, also returns a boolean indicating if the key exists 
delete(map, "key") // delete statement, removes the key-value pair from the map with the specified key

pointer = new(int) // new operator, allocates memory for a specific type and returns a pointer to the allocated memory which is initialized to the default value of the type
*pointer = 10 // dereference operator, access the value at the address stored in the pointer, can be used to assign a value to the address stored in the pointer
&variable // address operator, returns the address of a variable



// ========================================
// ========== CONTROL STATEMENTS ==========
// ========================================

// If-Else If-Else Statement
if variable > 19 { // if statement, { must be in the same line as the if keyword, will execute its block if the condition is true
	fmt.print("true condition") // code to execute if the condition is true
} else if variable < 10 { // else if statement, else if must be in the same line as the closing } of the previous block and { must be in the same line as the else if keyword, will check the condition if the previous if or else if conditions were false and execute its block if the condition is true
	fmt.print("else if condition") // code to execute if the else if condition is true
} else { // else statement, else must be in the same line as the closing } of the previous block and { must be in the same line as the else keyword, will execute its block if all previous if and else if conditions were false
	fmt.print("else condition") // code to execute if all previous conditions were false
} 

// Switch Statement with Expression
switch variable { // switch statement with an expression, { must be in the same line as the switch keyword, will compare the expression with the cases and execute the block of the first matching case
case 10: // case statement, case must be in the same line as the case keyword, will execute its block if the expression matches the case value
	fmt.print("case 10") // code to execute if the case matches
	fallthrough // fallthrough statement, used to transfer control to the next case, must be the last statement in the case block, will not check the next case condition
case 20, 30: // case statement with multiple values
	fmt.print("case 20 or 30") // code to execute if the case matches any of the values
default: // default case, default must be in the same line as the default keyword, will execute its block if no other case matches
	fmt.print("default case") // code to execute if no other case matches
}

// Switch Statement with Initialization
switch variable2 := 10; variable2 { // switch statement with initialization, same as above with initialization statement that must be in the same line as the switch keyword and separated from the expression by a semicolon
}

// Switch Statement without Expression
switch { // switch statement without an expression, equivalent to switch true, will execute the block of the first case whose condition is true, same as if statement
case variable > 19: // case statement with a condition, will execute its block if the condition is true
	fmt.print("case variable > 19")
	fallthrough // fallthrough statement, same as in switch with expression
case variable < 10: // case statement with another condition
	fmt.print("case variable < 10")
default: // default case, will execute its block if no other case condition is true
	fmt.print("default case")
}



// =====================================
// ========== LOOP STATEMENTS ==========
// =====================================

// Simple For Loop
for i := 0; i < 10; i++ { // for loop with initialization and condition and post statement separated by semicolons, { must be in the same line as the for keyword, will execute its block as long as the condition is true
	fmt.print(i) // code to execute in each iteration of the loop 
	if i == 5 { 
		break // break statement, used to exit from the loop
	} else if i == 3 {
		continue // continue statement, used to skip the current iteration and go to the next one
	}
}

// For Loop with just Condition
for variable < 10 { // for loop with just a condition, equivalent to while loop, will execute its block as long as the condition is true, { must be in the same line as the for keyword, continune and break work the same as in simple for loop
	fmt.print(variable) // code to execute in each iteration of the loop
}

// Forever Loop
for { // for with no condition, will execute its block forever, { must be in the same line as the for keyword, equivalent to for true
	break //  continune and break work the same as in simple for loop
}

// For Range Loop
for index, value := range array { // for range loop, will iterate over the elements of an array, slice or string, index is optional and can be omitted, { must be in the same line as the for keyword
	break // continune and break work the same as in simple for loop
}
for key, value := range map_ { // for range loop over a map, will iterate over the key-value pairs of a map, value is optional and can be omitted, { must be in the same line as the for keyword
	break // continune and break work the same as in simple for loop
}  

// Labeled For Loop



// ===============================
// ========== FUNCTIONS ==========
// ===============================

func function(param1 int, param2 string) float32 { // function declaration with parameters which can be 0, and a return type which can be omitted the function will return nothing, { must be in the same line as the function declaration
	return 0.0 // return statement, can be used to return a value and exit from the function, value can be omitted in void function to exit directly from it 
}
func function_with_multiple_return() (int, string) { // function declaration with multiple return types separated by a comma and enclosed in parentheses
	return 0, "" // return statement with multiple return values separated by a comma
}
var var3 = function(32, "Hello") // function call with parameters with return value assigned to a variable
var var1, var2 = function_with_multiple_return() // initialization of multiple variables with the return values of a function



// =============================
// ========== STRUCTS ==========
// =============================

type InnerStruct struct { // struct declaration, used to declare a list of fields, can be accessed from anywhere in the file { must be in the same line as the struct declaration
	field1 uint8 // struct field declaration
}
type OuterStruct struct { 
	field2 uint8
	field3 InnerStruct // struct field declaration with another struct type
	InnerStruct // struct embedding, embeds the fields of a struct into the eclosing struct as if they were declared in the enclosing struct directly
}

func (s OuterStruct) method() uint8 { // method declaration, same as function declaration except that it has implicit variable s of the struct type that can be used to access the fields of the struct, { must be in the same line as the method declaration
	return s.field3.field1 //  struct field access of the implicit variable used in the method call
}

var myStruct OuterStruct // struct variable declaration
OuterStruct{10, InnerStruct{2}, 11} // struct literal declaration, used to initialize a struct variable with values for its fields, must provide values for all fields in the order of their declaration
OuterStruct{field1: 10} // same as, but order of fields does not matter and can ommit some of the fields, the omitted fields will be initialized with their default values
myStruct.field1 // struct field access, used to access the value of a struct field or assigne a value to it
myStruct.method() // method call, used to call a method of a struct from a struct variable


var anonymousStruct = struct { // anonymous struct declaration, used to declare a struct type without a name that is only used in the declaration of a variable of that type
	field1 uint8
}{12} // immediate initialization of the anonymous struct variable using a struct literal



// ================================
// ========== INTERFACES ==========
// ================================

type MyInterface interface { // interface declaration, used to declare a set of method signatures that a type must implement to be used as a parameter of a function with that interface type, { must be in the same line as the interface declaration
	method(uint8) uint8 // method signature, used to declare a method that a type must implement to satisfy the interface, can be any signature
}

func function_with_interface_param(param MyInterface) {} // function with an interface parameter, can accept any type that implements the methods of the interface



// =================================
// ========== GO-ROUTINES ==========
// =================================

var wg = sync.WaitGroup{} // wait group variable, used to register and wait for the completion of multiple go-routines, must be initialized before use
func go_routine() { // go-routine declaration, same as regular function but has one or more blocking operations that can be executed concurrently with other go-routines
	time.Sleep(1 * time.Second) // blocking operation
	wg.Done() // decrement the go-routine counter by 1, must be called at the end of the go-routine to signal its completion
}
wg.Add(1) // increment the go-routine counter by the number of coroutines called, must be done before starting the go-routines
go go_routine() // go-routine call, used to start a new go-routine that will execute concurrently with the main go-routine and other go-routines, does not block the execution of the main go-routine or other go-routines
wg.Wait() // wait for all registered go-routines to complete, must be called after starting the go-routines



// ==============================
// ========== CHANNELS ==========
// ==============================

var channel = make(chan int) // channel variable declaration with single value, used to declare a channel that can be used to send and receive values of a specific type from go-routines
var channel_buffer = make(chan int, 10) // channel variable declaraiton with buffer, same as above but allows the sender go-routine to send multiple values to the channel without blocking waiting for reads until the buffer is full

go channel_send(channel) // call to a go-routine that takes a channel as a parameter before reading from the channel
var value = <-channel // channel receive operation, reads a value from the channel
func channel_send(c chan int) { // go-routine that takes a channel of a specific type as a parameter
	c <- 10 // channel send operation, writes a value to the channel, blocks until the value is read from the channel by some go-routine 
	close(channel) // channel close operation, closes the channel and signals that no more values will be sent to the channel, must be called by the sender go-routine and not the receiver go-routine
}

// Channel Range-For statement
for value := range channel {} // channel range-for loop, continuasly reads values from the channel until it is closed by the sender 

// Channel Select statement 
select { // channel select statement, allows listening to multiple channels at the same time and executing the block of the first channel that has a value ready
	case value := <-channel: // select case, will execute its block if the channel has a value ready to be read
		fmt.print(value) // select case block
	case value := <-channel_buffer: 
		fmt.print(value)
}



// ==============================
// ========== GENERICS ==========
// ==============================

// Generic Functions
func generic_function[T int | string, U any](param1 T, param2 U) { // generic function declaration, takes one or more type parameters that can be used as regular types in the function parameters and return type and inside the funciton, the type parameters can be 'any' or a list of types separated by |
	var variable T // the type parameter can be used for any purpose as a regular type
	fmt.Print(param2)
}
generic_function[int, string](10, "hello") // generic function call, type parameters must each be one of the types specified in the function declaration, unless its 'any'
generic_function(10, "hello") // generic function call with type inference, the type parameters can be ommited if they can be inferred from the types of the arguments passed to the function

// Generic Structs
type GenericStruct[T int | string, U any] struct { // generic struct declaration, similar to generic function declaration
	field1 T // field declaration a generic type parameter
	field2 U
}
GenericStruct[int, string]{10, "hello"} // generic struct literal declaration, type parameters must each be one of the types specified in the struct declaration, unless its 'any'