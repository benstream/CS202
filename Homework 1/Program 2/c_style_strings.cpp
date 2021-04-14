
#include <iostream>
//Benjamin Stream
//CS202
//C_STYLE_STRINGS.CPP



//that copies a C-style string into memory it allocate dynamically(using new).
char* strdup(const char* s) {
	char* tempcopy = new char; 
	tempcopy = (char*)s;
	return tempcopy;
}


// finds the first occurrence of the C - style string x in s.
char* findx(const char* s, const char* x) {



}

int main() {

	char quad[] = "The quadradic formula is -A plus or minus Square root of B squared minus 4AC all over 2 A";

	for (auto i : quad)
	{
		std::cout << strdup(quad) << std::endl;
	}




}