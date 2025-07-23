

class Class:
	var = 5
	def method(self): pass
	def __and__(self, other): pass
	def __or__(self, other): pass
	def __not__(self): pass
	def __getitem__(self, key): pass
	def __enter__(self): return self
	def __exit__(self, exc_type, exc_value, traceback): pass

obj_var1 = Class()
obj_var2 = Class()
list_var = [2, 3, 4]

# =======================================



# ==============================
# ========== COMMENTS ==========
# ==============================

# This is a comment

"""
This is a multi-line comment
It can span multiple lines
"""


# ==============================
# ========== VARIABLE ==========
# ==============================

int_var = 8
int_var = 0o353
int_var = 0x1A3F
int_var = 0b101010

str_var = '9'
str_var = "Hello, World!"
str_var = f'Formatted string with value: {int_var}'
str_var = r'Raw string with backslash \n not interpreted'
str_var = '''This is a
multi-line string
using triple quotes.
'''
str_var = fr'''Multi line formatted raw string with value: {int_var} 
and backslash \n not interpreted'''

float_var = 10.0
float_var = 1.34340e5
float_var = 1.34340E5

bool_var = True
bool_var = False

none_var = None
ellipsis_var = ...

list_var = [1, 2, 3]  # List
tuple_var = (1, 2, 3)  # Tuple
set_var = {1, 2, 3}  # Set
dict_var = {'key': 'value'}  # Dictionary

# Variable declaration with tuple unpacking
a, b = 5, 6

# Variable declaration with multiple assignments
a = b = 7

# Variable declaration with type hints
a: int = 5



# ===============================
# ========== OPERATORS ==========
# ===============================

# Arithmetic operators
add_result = 5 + 3
sub_result = 5 - 3
mul_result = 5 * 3
div_result = 5 / 3
floor_div_result = 5 // 3
exp_result = 5 ** 3
mod_result = 5 % 3

# Comparison operators
eq_result = 5 == 3
ne_result = 5 != 3
lt_result = 5 < 3
gt_result = 5 > 3
le_result = 5 <= 3
ge_result = 5 >= 3

# Comparison chaining
chaining_result = 1 < a < 3

# Logical operators
and_result = True and False
and_result = obj_var1 & obj_var2

or_result = True or False
or_result = obj_var1 | obj_var2

not_result = not True

# Bitwise operators
bit_and_result = 5 & 3
bit_or_result = 5 | 3
bit_xor_result = 5 ^ 3
bit_not_result = ~5
bit_left_shift_result = 5 << 1
bit_right_shift_result = 5 >> 1

# Membership access operator
obj_var1.var = 10
obj_var1.method()

# Walrus operator
walrus_result = (x := 5) + 10

# Is operator
is_result = obj_var1 is obj_var2
is_not_result = obj_var1 is not obj_var2

# In operator
in_result = 5 in [1, 2, 3, 4, 5]
not_in_result = 5 not in [1, 2, 3, 4, 5]

# Subscript operator
subscript_result = list_var[2]
obj_var1[1, 3]

# Slice operator
slice_result = list_var[1:3]  
slice_result = list_var[1:]
slice_result = list_var[:3]
slice_result = list_var[:]
slice_result = list_var[::2]
slice_result = list_var[::-1]  



# =======================================
# ========== CONTROL STATMENTS ==========
# =======================================

# If statement
if int_var > 5:
	int_var += 1
elif int_var < 5:
	int_var -= 1
else:
	int_var = 5

# Inline if statement
int_var = 10 if int_var > 5 else 0

# With statement
with obj_var1 as context:
	context.method()

# Match statement
var = (1, [2, 3])
match var:
	case 4: pass
	case (1, [2, 3]): pass
	case _: pass



# =====================================
# ========== LOOP STATEMENTS ==========
# =====================================

# For loop
sum = 0
for item in list_var:
	if item < 3:
		continue
	elif item == -1:
		break
	sum = item + 1
else: # Executed if loop completes without break
	sum = 10

# While loop
while int_var < 10:
	if int_var < 8:
		continue
	elif int_var == -1:
		break
	int_var += 1
else: # Executed if loop completes without break
	int_var = 20



# ===============================
# ========== EXCEPTION ==========
# ===============================

# Exception handling
try:
	int_var = 10 / 0
except ZeroDivisionError as e: # Catching specific exception
	int_var = 0
except Exception as e: # Catching general exception
	int_var = -1
else: # Executed if no exception occurs
	int_var = 50
finally: # Always executed
	int_var = 100

# Raising exceptions
# raise ValueError("This is a value error")



# ================================
# ========== ASSERTIONS ==========
# ================================

assert int_var > 0, "int_var must be greater than 0"



# ============================
# ========== DELETE ==========
# ============================

del int_var  # Deletes the variable int_var



# ===============================
# ========== FUNCTIONS ==========
# ===============================

# Function definitions with return
def function_with_args(arg1: int, arg2=10, *args, **kwargs) -> int:
	"""Function with positional and keyword arguments."""
	return arg1 + arg2 + sum(args) + sum(kwargs.values())

# Function with no return
def function_with_no_return() -> None:
	pass
	return None

a = 5
def function_with_global_and_nonlocal():
	global a  # uses global variable a
	a += 1  # modifies global variable a
	b = a
	def nested_function():
		nonlocal b
		global a
		b += 1
		a += 2
	nested_function()



# =============================
# ========== LAMBDAS ==========
# =============================

lambda_with_args = lambda x, y: x + y
lambda_no_args = lambda: 42



# =============================
# ========== CLASSES ==========
# =============================

class Base:
	static = 10
	def __init__(self, value):
		self.value = value
	def method(self):
		return self.value
	@staticmethod
	def static_method():
		return "This method is called on the class"
	@classmethod
	def class_method(cls):
		return "This method is called on the class and takes the class as the first argument"
	def __str__(self): # Called when using str(obj)
		return f"Value: {self.value}"
	def __repr__(self): # Called when using repr(obj)
		return str(self)
	def __add__(self, other): # Called when using obj1 + obj2, can return anything
		return Base(self.value + other.value)
		# __sub__ -, __mul__ *, __div__ /, __floordiv__ //, __mod__ %, __pow__ **, __lshift__ <<, __rshift__ >>, __and__ &, __or__ |, __xor__ ^
	def __eq__(self, other): # Called when using obj1 == obj2, can return anything
		return self.value == other.value
		# __ne__ !=, __lt__ <, __le__ <=, __gt__ >, __ge__ >=
	def __call__(self, arg): # Called when using obj()
		self.value += arg
	def __len__(self): # Called when using len(obj)
		return 1
	def __bool__(self): # Called when using bool(obj)
		return self.value > 0
	def __hash__(self): # Called when using hash(obj)
		return hash(self.value)
	def __iter__(self): # Called when using iter(obj)
		return self
	def __next__(self): # Called when using next(obj)
		self.value += 1
		return self.value
	def __getitem__(self, key): # Called when using obj[key]
		return self.value + key
	def __setitem__(self, key, value): # Called when using obj[key] = value
		self.value = value + key
	def __delitem__(self, key): # Called when using del obj[key]
		self.value -= key
	def __enter__(self): # Called when using with statement
		return self
	def __exit__(self, exc_type, exc_value, traceback): # Called when exiting with statement
		pass
	def __contains__(self, item): # Called when using item in obj
		return item == self.value
	
# Class inheritance
class Derived(Base):
	def __init__(self, value, extra):
		super().__init__(value)  # Call the constructor of the base class
		self.extra = extra
	def method(self):  # Override method from base class
		return f"{self.value} and {self.extra}"
	def additional_method(self):
		return f"Extra value: {self.extra}"

# Class instantiation
base_obj = Base(10)
derived_obj = Derived(20, 12)

# Multiple inheritance
class GrandDerived(Derived, Base):
	def __init__(self, value, extra, grand_extra):
		super().__init__(value, extra)  # Call the constructor of the base class in the order of inheritance
		self.grand_extra = grand_extra
	def method(self):  
		return super().method() # Call the method from the base class in the order of inheritance



# ================================
# ========== DECORATORS ==========
# ================================

# Function decorator with no arguments
def decorator(func):
	def wrapper(*args, **kwargs):
		print("Before function call")
		result = func(*args, **kwargs)
		print("After function call")
		return result
	return wrapper

# Function decorator with arguments
def decorator_with_args(arg1, arg2):
	def decorator(func):
		def wrapper(*args, **kwargs):
			print(f"Decorator arguments: {arg1}, {arg2}")
			return func(*args, **kwargs)
		return wrapper
	return decorator

# Class decorator with no arguments
class ClassDecorator:
	def __call__(self, func):
		def wrapper(*args, **kwargs):
			print("Before method call")
			result = func(*args, **kwargs)
			print("After method call")
			return result
		return wrapper

# Class decorator with arguments
class ClassDecoratorWithArgs:
	def __init__(self, arg1, arg2):
		self.arg1 = arg1
		self.arg2 = arg2
	def __call__(self, func):
		def wrapper(*args, **kwargs):
			print(f"Decorator arguments: {self.arg1}, {self.arg2}")
			return func(*args, **kwargs)
		return wrapper

# Decorating functions
@decorator
def decorated_function(x, y):
	return x + y

@decorator_with_args("arg1", "arg2")
def decorated_function_with_args(x, y):
	return x + y

@ClassDecorator()
def class_decorated_function(x, y):
	return x + y

@ClassDecoratorWithArgs("arg1", "arg2")
def class_decorated_function_with_args(x, y):
	return x + y

# Decorating methods
class DecoratedClass:
	@decorator
	def method(self, x, y):
		return x + y
	
	@ClassDecorator()
	def class_method(self, x, y):
		return x + y



# ================================
# ========== GENERATORS ==========
# ================================

def generator_function(x):
	for i in range(x):
		yield i * 2  

gen = generator_function(5)
a = next(gen)  # Get the first value from the generator
for value in gen:  # Iterate through the remaining values
	pass
for value in generator_function(3):  # Iterate through the generator directly
	pass
