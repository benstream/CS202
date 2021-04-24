/*
Benjamin Stream
tokenizer.h
CS202 HW3
*/
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <vector>

#ifndef TOKENIZER_H
#define TOKENIZER_H

struct tokenizer {
	int _line = 0;
	int _column = 0;
	std::string _token;
	std::string _reference;
};

void inputString(const std::string string);

void printTokenizedString(std::istream& is);



























#endif //!TOKENIZER_H