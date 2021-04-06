#include "Wrapper.h"

int main() {


	Wrapper<int> w{ 2 };
	Wrapper<string>  s{ "Hello world!" };

	cout << w << " " << s << endl;

}