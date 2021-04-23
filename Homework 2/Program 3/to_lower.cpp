/*
Benjamin Stream
to_lower.cpp
CS202 HW2
*/

#include <iostream>

void to_lower(char* s) {
	char* finalString = s;
	int counter=0;
	int it = 0;
	while(s[counter] != '\0') {
		if(s[counter] >= 'A' && s[counter] <= 'Z' ){
			it = s[counter]+32;
			finalString[counter]= it;
			it = 0;
		}
		counter++;
}
	std::cout << finalString<<'\n';
}
int main() {
	char applebees[] = "APPLEBEES";
	std::cout << applebees << std::endl;
	to_lower(applebees);

}