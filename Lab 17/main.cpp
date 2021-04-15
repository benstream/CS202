#include <iostream>
#include<vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::endl;

template <typename Iterator>
void printReversed(Iterator theBegin, Iterator theEnd) {
	if (theBegin == theEnd) {
		return;
	}
	theEnd--;
	cout << *theEnd << " ";
	printReversed(theBegin, theEnd);
}

int main() {
	string s("Hello World!");
	printReversed(begin(s), end(s));
	cout << "\n";
	vector<int> primes{ 2,3,5,7,11,13,17 };
	printReversed(begin(primes), end(primes));
	cout << "\n";
	return 0;
}
