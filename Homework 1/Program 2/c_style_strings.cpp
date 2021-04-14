
#include <iostream>
//Benjamin Stream
//CS202
//C_STYLE_STRINGS.CPP



//that copies a C-style string into memory it allocate dynamically(using new).
//removed 'u' in strpup because the defined function is depreciated
char* strdp(const char* s) {
	char* tempcopy = new char; 
	tempcopy = (char*)s;
	return tempcopy;
}


// finds the first occurrence of the C - style string x in s.
char* findx(const char* s, const char* x) {

	return 0;

}

int main() {

	char quad[] = "The quadradic formula is -A plus or minus Square root of B squared minus 4AC all over 2 A";

	std::cout << strdp(quad) << std::endl;





}