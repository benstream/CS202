#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;


template<class TwiceType>
TwiceType twice(TwiceType t){
	return t = t + t;
}

string twice(const char* t) {
	string s(t);
	return s + s;
}

int main() {

	cout << twice(2) << endl;
	cout << twice(2.3) << endl;
	cout << twice(string("Hello")) << endl;


};