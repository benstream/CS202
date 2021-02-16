#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

class Happy {
	friend ostream& operator<<(ostream& os, const Happy& f);

public:
	Happy();
	Happy(int x) :_fish(x) {};
	~Happy();
	void setData(int x,int y) {
		x = _fish;
		y = _hours;
	}
	int getData();
	
	
	void operaoperator + (const Happy & f, Happy f2) {};



private:
	int _fish; // fish caught
	int _hours; // hours fishing
	int totalFish; //total fish
	int totalHours; //total hours
};

