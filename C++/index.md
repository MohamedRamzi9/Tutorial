1. comments
	1. single line comments
	1. multi line comments
1. Main function
1. Variables
	1. declaration
		1. Primitive types
			1. integral 
				1. signed
				1. unsigned
			1. floating point 
			1. boolean 
			1. character 
				1. wchar_t 
				1. char16_t
				1. char32_t
			1. void 
			1. pointer 
			1. array 
			1. lvalue reference
			1. rvalue reference
		1. user defined types
	1. const
	1. volatile
	1. extern
	1. thread_local
	1. constinit
	1. inline
	1. function pointer
	1. function reference
	1. auto
	1. decltype(auto)
	1. structured binding
	1. template variables
	1. pointer to member
	1. pointer to member function
	1. alignas
1. literals
	1. character literals
	1. integer literals
	1. floating point literals
	1. string literals
	1. boolean literals
	1. null pointer literals
1. initialization
	1. default initialization
	1. direct initialization
	1. value initialization
	1. copy initialization
	1. uniform initialization 
	1. uniform copy initialization
	1. aggregate initialization
	1. designated initialization
1. Operators 
	1. arithmetic 
	1. comparison 
		1. three way comparison
	1. logical 
	1. bitwise 
	1. assignment 
	1. member access 
	1. pointer to member access
	1. deference 
	1. address 
	1. ternary 
	1. comma 
	1. sizeof sizeof...
	1. alignof 
	1. typeid
	1. new, placement new,
		// finish the new section ❌❌❌
	1. delete delete[]
	1. noexcept
	1. scope resolution operator
1. Functions
	1. Function declaration
		1. return type
			1. auto return type
			1. trailing return type
		1. parameters
		1. template arguments
			1. auto arguments
			1. parameter pack
				1. pack indexing
		1. default arguments
		1. concept auto
		1. noexcept specifier
			1. noexcept operator
		1. constexpr specifier
		1. consteval specifier
		1. inline specifier
		1. static specifier
		1. function overloading
		1. deleted functions
	1. function definition
		1. static variables
	1. function call
1. Types
	1. class and struct
		1. class declaration
			1. alignas specifier
			1. final specifier
		1. class definition
			1. access specifiers
			1. member variables
				1. mutable variables
			1. static variables
				1. static variables defintion
			1. member functions
				1. explicit this argument
				1. external function declaration 
				1. virtual functions
				1. pure virtual functions
				1. const functions
				1. volatile functions
				1. static functions
			1. special member functions
				1. explicit constructor
				1. default constructor
				1. copy constructor
				1. copy assignment operator
				1. move constructor
				1. move assignment operator
				1. delegating constructor
			1. destructor
			1. operators overloading 
				1. arithmetic operators
				1. comparison operators
				1. logical operators
				1. conversion operators
				1. call operator
				1. subscript operator
				1. dereference operator
				1. pointer to member operator
				1. static call operator
				1. static subscript operator
				1. comma operator ❌❌❌
			1. default special functions
			1. nested class 
			1. inheritance
				1. using declaration
				1. base class access specifiers
				1. function overriding
				1. virtual inheritance
				1. multiple inheritance
				1. base class access from object
			1. friend functions
			1. friend class 
		1. static member access
	1. anonymous class and struct 
	1. union 		
		1. anonymous union
	1. enum
		1. enum declaraion
		1. enum definition
			1. default value 
			1. explicit value
		1. enum class
			1. using enum
		1. enum base type
1. control statements
	1. if else
		1. if init statment
		1. structured binding declaration as condition ❌❌❌
	1. if constexpr else
		1. if constexpr init statement
	1. if consteval else
	1. if !consteval else
	1. switch case default break
	1. label goto
	1. return
	1. return void
1. loop statements
	1. for
	1. range for 
		1. range for with initializer
	1. while
	1. do while
	1. break
	1. continue
1. lambdas
	1. lambda capture
		1. capture all by value and reference
		1. capture by value and reference
		1. init capture
		1. static mutable noexcept
		1. this capture
		1. parameter pack capture and init capture
	1. parameters
		1. deducing this parameter
	1. trailing return type
	1. lambda calling 
1. namespaces
	1. namespace definition
		1. nested namespace definition
	1. namespace access
	1. inline namespaces
	1. unnamed namespaces
	1. using namespace
1. using 
	1. typedef declaration
		1. variable declaration in typedef ❌❌❌
		1. unnamed struct typedef
	1. alias declaration
	1. using as statement
1. user defined literals
	1. integer literals
	1. floating point literals
	1. string literals
	1. character template literals
1. attributes
	1. [[deprecated]]
	1. [[nodiscard]]
	1. [[maybe_unused]]
	1. [[no_unique_address]]
	1. [[fallthrough]]
	1. [[likely]]
	1. [[unlikely]]
	1. [[carries_dependency]] ❌❌❌
	1. [[assume]]
	1. [[noreturn]]
	1. using namespace attributes ❌❌❌
1. type casting🟢🟢🟢
	1. static cast
	1. dynamic cast
	1. const cast
	1. reinterpret cast
	1. c style cast
	1. function style cast
1. coroutines
	1. co_await
	1. co_yield
	1. co_return
	1. promise
	1. awaitable
1. concepts
1. requires expression
	1. requires with args
	1. requires requires
1. static assert
1. decltype specifier
1. typeid specifier
1. asm declaration
1. templates
	1. template parameter pack
		1. pack indexing
	1. template template parameters
	1. auto template parameters
	1. concept in template parameters
	1. function and lambda template parameters
		1. auto parameters
1. deduction guides
1. exceptions
	1. throw
	1. rethrow
	1. catch
	1. catch all
1. fold expressions
	1. unary fold expressions (left and right)
	1. binary fold expressions (left and right)
1. preprocessor directives
	1. #define #undef
	1. #ifdef #ifndef #elfidef #elifndef  
	1. #include
	1. #line
	1. #embed
	1. #if #elif #else #endif
	1. #error
	1. #warning
	1. #pragma
		1. once
1. modules 
	1. module declaration
	1. module import
	1. module export