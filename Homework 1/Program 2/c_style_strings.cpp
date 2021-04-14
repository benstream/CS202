
#include <iostream>
//Benjamin Stream
//CS202
//C_STYLE_STRINGS.CPP



//copies a C-style string into memory it allocate dynamically(using new).
//removed 'u' in strpup because the defined function is depreciated
char* strdp(const char* s) {
	char* tempcopy = new char; 
	tempcopy = (char*)s;
	return tempcopy;
}


// finds the first occurrence of the C - style string x in s.
char* findx(const char* s, const char* x) {
	const char* pos = s; //pos is to keep track of our progress through s
	const char* search = x;
		
	while (*s && *search) {
		if(*search == *s){
			search++;
			s++;
			}
		else {
			s++;
			pos = s; // save the place weve searched in the string
			search = x; // reset our x
		}
	}
	// this if statement searches for the terminating 0 of our c-style-string! really neat trick I found.
	if (*s == '\0' && *search) {
		printf("%s not found.\n",x);
		pos = 0; 
		return (char*)"No match";
	}
	printf("%s is found in ", x);
	return (char*)pos;
}

int main() {
	const char quadradic[]= "4AC";
	const char quad[] = "The quadradic formula is -A plus or minus Square root of B squared minus 4AC all over 2 A";
	
	std::cout << findx(quad, quadradic) << std::endl;
	std::cout << strdp(quad) << std::endl;



}