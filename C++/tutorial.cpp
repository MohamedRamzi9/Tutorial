#include <cstddef> // for std::nullptr_t
struct MyStruct { 
	int x, y;
	void method() {}
};
int function(int a);


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
int b, c; // multiple declaration

// Primitive Types
int int_var; // equivalent to signed int, long, long int, signed long, signed long int
unsigned int unsigned_int_var; // equivalent to unsigned long, unsigned long int
short short_var; // equivalent to signed short, signed short int, short int
unsigned short unsigned_short_var; // equivalent to unsigned short int, unsigned short
long long int long_long_int_var; // equivalent to signed long long, signed long long int, long long
unsigned long long int unsigned_long_long_int_var; // equivalent to unsigned long long, unsigned long long  
float float_var; 
double double_var; 
long double long_double_var; 
bool bool_var; 
char char_var; // 
wchar_t wchar_var; // for wide characters, variable length depending on platform
char16_t char16_var; // for UTF-16 characters
char32_t char32_var; // for UTF-32 characters
std::nullptr_t nullptr_var; // the type of nullptr
void* void_ptr_var; // can add more * to make it a pointer to pointer, etc.
char array_var[10]; // array of 10 chars, size must be known at compile time
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
