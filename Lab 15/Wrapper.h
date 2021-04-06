#ifndef WRAPPER_H
#define WRAPPER_H
#include <string>
#include <strstream>
#include <iostream>
using std::endl;
using std::cout;
using std::string;

template<typename First>
class Wrapper {

public:
	Wrapper(First first);
	void setFirst(First first);
	void getFirst() const;
	template<typename R>
	friend std::ostream& operator<<(std::ostream& os, const Wrapper<R>& m);

private:
	First _first;
};

	template<typename First>
	Wrapper<First>::Wrapper(First first) :_first(first) {
	}

	template<typename First>
	void Wrapper<First>::setFirst(First first) {
		_first = first;
	}

	template<typename First>
	void Wrapper<First>::getFirst() const {
		return _first;
	}

	template<typename First>
	std::ostream& operator<<(std::ostream& os, const Wrapper<First>& m) {
		return os << m._first;
	}


#endif //WRAPPER_H