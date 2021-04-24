#include<istream>
#include <iostream>
#include <fstream>


template<typename number>
void myWrite(std::ofstream& ofile, const number &num) {
	ofile.write(reinterpret_cast<const char*>(&num), sizeof(num));
}
template<typename number>
void myRead(std::ofstream& ofile, const number &num) {
	ofile.read(reinterpret_cast<const char*>(&num), sizeof(num));
}