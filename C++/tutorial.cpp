#include <cstddef> // for std::nullptr_t
#include <stdfloat> // for std::float16_t, std::float32_t, std::float64_t, std::float128_t, std::bfloat16_t
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


