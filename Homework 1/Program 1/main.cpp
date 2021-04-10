#include "stopwatch.h"
using std::cout;
using std::endl;
using std::vector;
using std::search;
using std::binary_search;


auto randGenerator() {

	// Will be used to obtain a seed for the random number engine.
	std::random_device rd;

	// Standard mersenne_twister_engine seeded with rd().
	std::mt19937 gen(rd());
	return gen;
}


vector<int> makeVector(int x,int y) {
	vector<int> v;
	
	auto gen = randGenerator();
	
	for (int i = 0; i < y; i++) {
		// Will create a vector based on the upper bounds of the random range.
		v.push_back(gen() % 100 + 1);
		
	}
	return v;
}






int main(int argc, const char** argv) {
	
	StopWatch Time;
	
	//TotalTime.start();
	//Default.start();

	auto a = makeVector(0, 10000000); // creates a vector length 10 with random values 0-10
	//auto b = makeVector(0, 100);// creates a vector length 10^2 with random values 0-10^2
	//auto c = makeVector(0, 1000);// creates a vector length 10^3 with random values 0-10^3
	//auto d = makeVector(0, 10000);// creates a vector length 10^4 with random values 0-10^4
	//auto e = makeVector(0, 100000);// creates a vector length 10^5 with random values 0-10^5
	//auto f = makeVector(0, 1000000);// creates a vector length 10^6 with random values 0-10^6
	//auto g = makeVector(0, 10000000);// creates a vector length 10^7 with random values 0-10^7
	//auto h = makeVector(0, 100000000);// creates a vector length 10^8 with random values 0-10^8

	Time.start();
	sort(a.begin(), a.end(), [](int a, int b) {return a > b; }); // Sorts by decending order
	cout << Time.start() << endl;
	//binary_search(a.begin(), a.end(), [](int a, int b) {return a > b; }); // Sorts by decending order
	
	//cout << Default.stop() << endl;
	
	//cout << TotalTime.stop() << endl;
}

