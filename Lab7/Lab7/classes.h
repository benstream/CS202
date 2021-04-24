#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class Happy {
	friend ostream& operator<<(ostream& os, const Happy& f);
	friend ostream& operator+(const Happy& f, const Happy& f2);

public:
	Happy();
	Happy(const Happy&);
	Happy(int z);
	~Happy();
	int getData();







private:
	int _fish=0; // fish caught
	int totalFish=0; //total fish
};

