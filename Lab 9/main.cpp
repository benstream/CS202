#include "complex.h"
using std::ostringstream;



void main() {
	Complex a(12, 14);
	Complex b(2, -3);

	std::cout << 1 + Complex(2, 3) << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a + 1 << std::endl;
}