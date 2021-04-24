#include "myreadwrite.h"

int main() {
	std::ofstream ofile("numbers.dat");
	double d = 13.3;
	myWrite(ofile, d);
	int x = 5;
	myWrite(ofile, x);

	std::ifstream ifile("numbers.dat");
	double readd;
	int readx;

	myRead(ifile, readd);
	myRead(ifile, readx);
}