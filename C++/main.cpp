
void func() {}
class MyClass final {
	int operator~() const {
		return 0;
	}
};

int main() {
	int x = 10;
	x &= 5; 
}