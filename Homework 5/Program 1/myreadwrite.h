
#ifndef MYREADWRITE_H
#define MYREADWRITE_H
#include <iostream>
#include <fstream>


template<typename number>
void myWrite(std::ofstream& ofile, const number &num) {
	ofile.write(reinterpret_cast<const char*>(&num), sizeof(num));
}
template<typename number>
void myRead(std::ifstream& ifile, number &num) {
	ifile.read(reinterpret_cast<char*>(&num), sizeof(num));
}

#endif //!MYREADWRITE_H