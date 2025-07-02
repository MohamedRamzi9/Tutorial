#include <cstddef> // for std::nullptr_t
#include <stdfloat> // for std::float16_t, std::float32_t, std::float64_t, std::float128_t, std::bfloat16_t
#include <typeinfo> // for std::type_info
struct MyStruct { 
	int x, y;
	void method() {}
} object, *object_ptr;
int function(int a);
template <class s> concept always_true = true; 
namespace Namespace { int x; }
char array[10];



// ========================================

// === Comments ===
// this is a single line comment
/*
this is a multi line comment
*/


// === Main function ===
int main() {} // No arguments version
int main(int argc, char* argv[]) {} // With arguments version


// === Variables ===
// Decalaration
int a; // single decaration
int b, c; // multiple declaration of same type

// Primitive Types
char char_var; // 8bit equivalent to signed char
unsigned char unsigned_char_var; // 8bit equivalent to unsigned char
short short_var; // 16bit equivalent to signed short, signed short int, short int
unsigned short unsigned_short_var; // 16bit equivalent to unsigned short int, unsigned short
int int_var; // 32bit equivalent to signed int, long, long int, signed long, signed long int
unsigned int unsigned_int_var; // 32bit equivalent to unsigned long, unsigned long int
long long int long_long_int_var; // 64bit equivalent to signed long long, signed long long int, long long
unsigned long long int unsigned_long_long_int_var; // 64bit equivalent to unsigned long long, unsigned long long  
float float_var; // 32bit 
double double_var; // 64bit 
long double long_double_var; // 128bit or 80bit depending on platform 
bool bool_var; // 8bit 
wchar_t wchar_var; // for wide characters, variable length depending on platform
char16_t char16_var; // for UTF-16 characters
char32_t char32_var; // for UTF-32 characters
std::nullptr_t nullptr_var; // the type of nullptr
void* void_ptr_var; // can add more * to make it a pointer to pointer, etc.
char array_var[10]; // array of 10 chars, size must be known at compile time
char matrix_var[3][4]; // multidimensional array, the size of each dimension can be variable except the inner most one must be known at compile time
char& lvalue_ref_var = char_var; // lvalue reference, must be initialized
char&& rvalue_ref_var = 'a'; // rvalue reference, must be initialized
MyStruct my_struct_var; // user-defined type

const int const_var = 10; // must be initialized at declaration
volatile int volatile_var;  // tells compiler can't optimize this variable
extern int extern_var; // defined in another file
thread_local int thread_local_var; // unique to each thread
constinit int constinit_var = 20; // must be initialized at declaration, can be changed later
constexpr int constexpr_var = 30; // must be initialized at declaration, will be replaced at compile time
inline int inline_var = 40; // allows same definition in different translation units
alignas(16) int aligned_var; // variable with alignment requirement, can be any power of 2
int (*function_ptr)(int) = function; // function pointer
int (*function_ptr)(int) = &function; // can also use address-of operator
int (&function_ref)(int) = function; // function reference
auto auto_var = 50; // type deduced from initializer without cv-quantifiers so must be initialized
decltype(auto_var) decltype_var = const_var; // type deduced from initializer with cv-qualifiers
auto [x, y] = my_struct_var; // structured binding to a copy of my_struct_var, x and y are references to members of the copy
auto& [x, y] = my_struct_var; // structured binding that references my_struct_var, x and y are references to members of my_struct_var
auto&& [x, y] = my_struct_var; // structured binding to an rvalue of my_struct_var, x and y are references to members of the rvalue
template <typename T> int zero_var = T(0); // template variable
int MyStruct::* ptr_to_member = &MyStruct::x; // pointer to member x of MyStruct
void (MyStruct::* ptr_to_member_function)() = &MyStruct::method; // pointer to member function method of MyStruct


// === Literals ===
char ascii_char = 'a'; 
char8_t utf8_char = u8'a';
const char8_t* emoji = u8"😊", u8"\U0001F393", u8"\u1A29";
char16_t utf16_char = u'Ω', u'\u03A9'; 
char32_t utf32_char = U'😂', U'\U0001F602';
wchar_t wide_char = L'あ';
char16_t octal_char = u'\2', u'\42', u'\377', u'\o{21636621}'; // the maximum value is 377 with no \o{}
char32_t hexadecimal_char = U'\x1F6017A8'; // or any number of hex digits

// Integral Literals
int decimal_int = 123, 123l, 123L; 
unsigned int unsigned_decimal_int = 123u, 123U, 123ul, 123UL; 
long long int long_decimal_int = 1234567890123456789ll, 1234567890123456789LL; 
unsigned long long int unsigned_long_decimal_int = 1234567890123456789ull, 1234567890123456789ULL; 
long long int size_t_var = 1234567890z; 
std::size_t unsigned_size_t_var = 1234567890uz; 

int octal_int = 0123; 
int hexadecimal_int = 0x1bFAe, 0X1bFAe; 
int binary_int = 0b101010, 0B101001; 

int with_sign_int = -123; 
int separated_decimal_int = 1'2323'124;

// Floating Point Literals
double double_var = 1.23;
float float_var = 1.23f, 1.23F;
long double long_double_var = 1.23l, 1.23L; 
std::float16_t float16_var = 1.23f16, 1.23F16; 
std::float32_t float32_var = 1.23f32, 1.23F32;
std::float64_t float64_var = 1.23f64, 1.23F64;
std::float128_t float128_var = 1.23f128, 1.23F128;
std::bfloat16_t bfloat16_var = 1.23bf16, 1.23Bf16;

double double_literal = .3f, 3.;
double double_scientific_literal = 3.e2, 3E2, 3e2, 3e+2, 3.e-2;
double binary_exponent = 0x3.2p2, 0x3.2P2; 

// String literals
const char* string_literal = "asc \n \t \t \r \v \f \a \b \\a \0";
const char* raw_string_literal = R"seq(some text \t \a)seq"; // seq can be anything even empty

// Boolean literals
bool bool_literal = true, false;

// Null pointer literal
std::nullptr_t null_ptr_literal = nullptr; // can be used with any pointer type


// === Iinitialization ===
int default_init; // default initialization, if type is class, default constructor is called instead
int direct_init(20); // direct initialization, constructor is called, paratheses can not be empty
int copy_init = 10; // value initialization, compiler will always optimize it to direct initialization
int direct_copy_init = int(30); // copy initialization, same as direct initialization, parentheses can be empty
int uniform_init{20}; // uniform initialization, no narrowing conversion allowed, braces can be empty
int uniform_copy_init = int{30}; // uniform copy initialization, same as uniform initialization
int aggregate_init = {40}; // aggregate initialization, same as uniform initialization, braces can be empty
MyStruct designated_init = {.x = 1, .y = 2}; // designated initialization, doesn't require all members, order must match type definition


// === Operators ===
// Arithmetic Operators
int result = 1 + 2; // addition
result += 3; // compound addition
int result = 1 - 2; // subtraction
result -= 3; // compound subtraction
int result = 1 * 2; // multiplication
result *= 3; // compound multiplication
int result = 1 / 2; // floor division
result /= 3; // compound floor division
int result = 1 / 2.; // floating point division, need at least one operand to be a floating point type
result /= 3.; // compound division
int result = 1 % 2; // modulus
result %= 3; // compound modulus
result++; // postfix increment, changes the value after usage
result--; // postfix decrement, changes the value after usage
++result; // prefix increment, changes the value before usage
--result; // prefix decrement, changes the value before usage
int result = -result; // unary negation, changes the sign of the value

// Comparison Operators
bool result = 1 == 2; // equality
bool result = 1 != 2; // inequality
bool result = 1 < 2; // less than
bool result = 1 > 2; // greater than
bool result = 1 <= 2; // less than or equal to
bool result = 1 >= 2; // greater than or equal to
auto result = 1 <=> 2; // three way comparison

// Logical Operators
bool result = true && false, true and false; // logical AND
bool result = true || false, true or false; // logical OR
bool result = !true, not true; // logical NOT

// Bitwise Operators
int result = 1 & 2, 1 bitand 2; // bitwise AND
result &= 3; // compound bitwise AND
int result = 1 | 2, 1 bitor 2; // bitwise OR
result |= 3; // compound bitwise OR
int result = 1 ^ 2, 1 xor 2; // bitwise XOR
result ^= 3; // compound bitwise XOR
int result = ~1, compl 1; // bitwise NOT
int result = 1 << 2; // left shift
result <<= 3; // compound left shift
int result = 1 >> 2; // right shift
result >>= 3; // compound right shift

int a = 3, a = 4; // Assignment operator
object.x; // member access operator
auto MyStruct::*ptr_to_member = &MyStruct::x; // member address operator
object.*ptr_to_member; // pointer to member access operator
object_ptr->x; // pointer member access operator
object_ptr->*ptr_to_member; // pointer to pointer member access operator
*object_ptr; // dereference operator
&object; // address-of operator
object[5]; // subscript operator
int ternary_result = 1 < 2 ? 3 : 4; // ternary operator
int comma_result = 1, 3; // comma operator, was using it all along ;)
int sizeof_result = sizeof(int); // sizeof operator, there is also sizeof... for parameter packs
int alignof_result = alignof(int); // alignof operator, returns alignment of type
const std::type_info& typeid_result = typeid(int), typeid(1 + 2); // typeid operator, returns

// New and Delete, needs more refinement 
char* char_ptr = new char; // with no arguments parentheses are optional
char* char_ptr = ::new char; // explicitly call the global new operator
char* char_ptr = new char('a'); // direct initialization
char* char_ptr = new (char_ptr)char; // placement new, constructs an object in the memory pointed by char_ptr
delete char_ptr; // unallocate the variable
delete[] char_array_ptr; // unallocate the array

bool does_throw = noexcept(1 + 2); // noexcept operator

int x = Namespace::x; // scope resolution operator, can be used on namespaces, classes, enums

// === Functions ===
void function_declaration(); // declaration with no definition;
auto auto_return_type() { return 1; }; // return type deduced from return statement
auto trailing_return_type() -> int; // trailing return type
void parameters(int a, auto x); // regular parameter and auto parameter
void paramter_pack(auto... pack) { // paramter pack and pack indexing
	auto first = pack...[0];
	auto last = pack...[sizeof...(pack) - 1]; 
}  
void default_argument(int a = 10); // default argument, must be at the end of the parameter list
void auto_concept_argument(always_true auto x); // auto argument with concept which must evaluate to true with the type of the argument
void noexcept_function() noexcept; // noexcept specifier, function will not throw exceptions
void noexcept_function() noexcept(true); // noexcept with expression, function may throw if expression is false
void noexcept_noexcept_function() noexcept(noexcept(1 + 2)); // inner noexcept is the operator, outer one is the specifier
constexpr void constexpr_function(); // constexpr function, may be evaluated at compile or runtime, depends on context
consteval void consteval_function(); // consteval function, must be evaluated at compile time
inline void inline_function(); // inline function, suggests to the compiler to inline the function, also allows same definition in different translation units
static void static_function(); // static function, has internal linkage
void overloaded_function(int a); int overloaded_function(double a); // overloaded function, same name but different parameters and return type
void deleted_function() = delete; // deleted function, this overload cannot be called

void function_definition() { // the body of the function goes here inside the curly braces
	// function body
}
void static_variable_function() { // static variables in functions, retain their value between calls
	static int static_var = 0;
}


// === Types ===
// Classes
class my_class; // class declaration, you can have pointer to incomplete class
struct my_struct; // same as class but default access specifier is public whereas private for class
class aligned_class alignas(16); // class with alignment requirement, can be any power of 2
class final_class final {}; // final class, cannot be inherited from

class Base { // class definition, goes inside the curly braces
private: // private access specifier, members are accessible only from inside the class
	int x; // member variable declaration, 
	mutable int mutable_x; // mutable member variable, can be modified even in const member functions
public: // public access specifier, members are accessible from outside the class
	static int y; // static member variable, 
protected: // protected access specifier, members are accessible from inside the class and derived classes
	int get_x(); // member function declaration
	int this_function() { // member function definition, can access private members of the class
		this->x = 10; // this pointer refers to the current object
		return x; // this is optional
	}
	int this_arg_function(this auto&& object) {
		return object.x; // can access private member x of the object
	}
	static void static_function(); // static member function, can't access non-static members
	virtual void virtual_function(); // virtual member function, can be overridden in derived classes
	virtual void pure_virtual_function() = 0; // pure virtual member function, makes the class abstract, cannot be instantiated
	void const_function() const; // const member function, can be called on const objects and modify non-mutable members of the class
	void volatile_function() volatile; // volatile member function, can be called on volatile objects

	// Special Member Functions
	Base(); // default constructor declaration
	Base(int a); // constructor declaration with parameter
	Base(int a) : x(a) { // constructor definition with member initializer list
		this->x = a; // at this point, x was already initialized in the member initializer list
	}
	explicit Base(); // explicit constructor, prevents implicit conversions
	Base(const Base&); // copy constructor declaration
	Base& operator=(const Base&); // copy assignment operator declaration
	Base(Base&&); // move constructor declaration
	Base& operator=(Base&&); // move assignment operator declaration
	Base() : Base(0) {} // delegating constructor, member initializer list isn't allowed here
	~Base(); // destructor declaration

	// Operators Overloading, all can be explicit 
	int operator+(const Base& other); // overload the + operator, same for +=, -, -=, *, *=, /, /=, %, %=, &, &=, |, |=, ^, ^=, <<, <<=, >>, >>=, &&, ||, !, ==, !=, <, >, <=, >=, <=>
	int operator-(); // overload the unary - operator, same for ~, prefix ++, prefix --, 
	int operator++(int); // overload the postfix ++ operator, same for postfix -- 
	operator int(); // conversion operator, works for any type, must return a value of the type being converted to
	void operator()(); // call operator, allows the object to be called like a function
	void operator[](int index); // subscript operator, allows the object to be indexed like an array, can take any number of parameters
	void operator*(); // dereference operator, doesn't take any parameters unlike multiplication operator
	void operator->(); // pointer to member operator
	static int operator()(int a); // static call operator
	static int operator[](int index, int value); // static subscript operator

	auto operator<=>(const Base& other) const = default; // if operator<=> is defaulted, or is defined and operator== is also defined the all comparison are automaticaly defined 
	// if operator== is defined or defautled then operator!= is automatically defined

	struct NestedClass {}; // nested class definition

	friend void friend_function(Base& base); // friend function declaration, frind_function will have access to all Base private members
	friend class NestedClass; // friend class declaration, all methods of NestedClass will have access to Base private members
};
int Base::y = 0; // static member variable definition
int Base::get_x() { // member function definition outside the class
	return x; // can access everything inside the class
}
Base::y = 10; // static member access

// Inheritance
class Derived1 : public Base { // public inheritance, attributes of Base are accessible as public in any class inheriting from Derived, same for protected and private
	using Base::this_function; // using declaration, introduces a member of the base class into the derived class scope
	int y;
	Derived1() : Base(10), y(55) {} // calls base constructor, not delegating constructor, can use member initializer list
	int get_x() { // function overriding, overrides the base class function
		return Base::get_x() + y; // can call base class function using scope resolution operator
	}
	void pure_virtual_function() override {} // override specifier, allows compiler to throw an error if the function is not overriding a base class function	
} object;
object.Base::get_x(); // access Base class from object

class A : virtual Base {}; class B : virtual Base {}; // virtual inheritance, to avoid having multiple base objects in diamond pattern
 
class DerivedAll : A, B {}; // multiple inheritance, same as regular inheritance

struct {  // anonymous struct, can be used without a name, members are accessible as if they were members of the enclosing scope
	int x;
	int y;
};
struct {
	int a;
	double b;
} unamed_struct; // anonymous struct with variable declaration, members are only accessible through the objects of the struct

union MyUnion { // union, can hold only one member at a time, size is the size of the largest member
	int x; // member variable x
	double z = 6.; // only one member can be initialized here
	static float y; // static member variable y, doesn't contribute to the layout of the union
	void method() {} // member function, can be called on the union object
	static void static_method() {} // static member function, can be called without an object
	MyUnion() {} // constructor
	~MyUnion() {} // destructor
	// and all class features can be used here except inheritance, virtual functions
};
static union {
	int x; 
	double z;
};  // anonymous union, members are accessible as if they were members of the enclosing scope, only needs to be static if declared in global scope

// Enum
enum Enum; // forward declaration of enumiration
enum Enum { // enumeration definition, all values can be accessed from enclosing scope
	Default, // default enumerator, has value of the previous enumerator + 1, or 0 if it's the first enumerator
	One = 1, // enumerator with explicit value
} enum_instance = One; // enum instance 
Enum::One; One; // accessing enumerator either via scope resolution operator or directly
int x = Default; // non class enumerators can be explicitly converted to their base type
Enum x = 4; // and can be initialized from base which corresponds to enumerator with that value
enum { A, B, C, } Enum; // anonymous enum
enum class ClassEnum { one, two, }; // enum class, values can only be accessed via scope resolution operator
ClassEnum::one; // accessing class enum values
using enum ClassEnum; // introduces all enumerators to the enclosing scope
enum BaseTypeEnum : char {a, b}; // enum with base type, will use that type for the enumerators

// === Control Statements ===
// If-Else
if (true) { // if statement, braces are optional if the body has only one statement
	// if condition is true, this block will be executed
} else if (false) { // else if statement, optional, it's just an else with one statement which is an if
} else { // else statement, optional, braces also optional if the body has only one statement
	// if no condition is true, this block will be executed
}

if (int a = 4; a < 4); // if statement with init statement

// If-Else constexpr
if constexpr (true) { // if constexpr statement, evaluated at compile time
	// if condition is true, this block will be added to the program, else it will be removed
} else { // else statement, optional, 
	// if condition is false, this block will be added to the program, else it will be removed
}

if constexpr (constexpr int a = 4; a < 4); // if constexpr statement with init statement, evaluated at compile time

// If-Else consteval
if consteval { // if consteval statement, braces are mandatory
	// this block will be excecuted when the program is compiled and then removed from the program
} else {
	// this block will be excecuted when the program is running as if there was no if statement
}
if !consteval { // if !consteval statement, the inverse of consteval
	// this block will be excecuted when the program is running as if there was no if statement
} else {
	// this block will be excecuted when the program is compiled and then removed from the program
}

// Switch-Case
switch (5) { // switch case statment, condition must be an integral type or enum 
	case 3: { // case statement, braces are optional if the body has no declaration
		// code will be executed from here to the end of the switch
		break; // break statement, optional, will exit the switch statement
	}
	case 4:
	case 5: // multiple case statements, can be used to group cases together
	break; // break statement can appear anywhere in the switch statement

	default: {} // default case, optional, will be executed if no case matches, can appear anywhere in the switch statement
}
switch (int a = 4; a) {} // switch statement with init statement

// Label-Goto
label: // label statement, can be used to jump to this point in the code
goto label; // goto statement, jumps to the label statement, 

// Reeturn
void function() {
	return; // return statement, exits the function without returning a value when the function is void
	int a = 9; // statement after return will not be executed
}
int function() { return 5; } // return statement with value, exits the function and returns the value

// === Loop statements ===
// For Loop
for (int x = 0; x < 10; ++x) { // for loop, braces are optional if the body has only one statement
	// code will be executed 10 times
	if (x == 5) 
		break; // break statement, exits the loop
	if (x == 3)
		continue; // continue statement, skips the rest of the loop body and goes to the next iteration
}
for (;;); // both initializer, condition and increment are optional, this will create an infinite loop

// Range For Loop
for (auto& element : array) { // range for loop, iterates over the elements returned by the iterator object, parentheses are optional if the body has only one statement
	// code will be executed for each element in the array
}
for (char array[5] = {1}; int& i : array); // range for loop with initializer

// While Loop
while (true) { // while loop, braces are optional if the body has only one statement
	// code will be executed as long as the condition is true
	if (false)
		break; // break statement, exits the loop
	if (true)
		continue; // continue statement, skips the rest of the loop body and goes to the next iteration
}

// Do-While Loop
do { // do-while loop, braces are optional if the body has only one statement
	// code will be executed at least once
} while (true); // condition is checked after the loop body