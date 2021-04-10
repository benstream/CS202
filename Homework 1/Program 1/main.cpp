#include "stopwatch.h"
using std::cout;
using std::endl;
using std::vector;
using std::search;
using std::binary_search;
using std::shuffle;

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
	
	auto comparison = makeVector(0, 33);
	StopWatch SortTime;
	StopWatch SearchTime;
	StopWatch BSearchTime;
	StopWatch ShuffleTime;
	//Run through 10, 100, 1k, 10k, 100k, 1m, 10m, 100m, 1b
	int lower_bound = 0;
	int upper_bound = 10;
		
	for (int i = 0; i < 5; i++) {
		SortTime.start();
		auto a = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
		sort(a.begin(), a.end()); //Sorts using default comparison
		cout << SortTime.stop() << endl;
	}
	for (int i = 0; i < 5; i++) {

		vector<int>::iterator it;
		auto b = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
		SearchTime.start();
		it = search(b.begin(), b.end(),comparison.begin(),comparison.end()); // Sorts using search
		cout << SearchTime.stop() << endl;
	}
	for (int i = 0; i < 5; i++) {
		
		auto c = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
		BSearchTime.start();
		bool binarySearch = binary_search(c.begin(), c.end(), comparison[1]); // binary Search via the first value stored comparison vector 
		cout << BSearchTime.stop() << endl;
	}
	for (int i = 0; i < 5; i++) {

		auto d = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
		ShuffleTime.start();
		shuffle(d.begin(), d.end(), randGenerator());
		cout << ShuffleTime.stop() << endl;
	}
	
}

