#include "stopwatch.h"
#include <fstream>
#include <list>
#include <deque>
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

std::vector<std::string> vectoredBook(const char* fileName) {
	std::ifstream book;
	book.open(fileName); // Contains over 400k Words of the English Language!

	std::vector<std::string> v;
	std::string word;
	
	while (book >> word) {
		book >> word;
		v.push_back(word);
	}
	book.close();
	return v;
}
std::string randomWord() { // Returns a random word to find in book
	auto randNum = randGenerator();

	std::ifstream dictionary;
	dictionary.open("books/words.txt"); // Contains over 400k Words of the English Language!

	std::vector<std::string> v;
	std::string words;

	while (true) {
		dictionary >> words;
		v.push_back(words);

		if (dictionary.eof()) {
			break;
		}
	}

	int rNum = randNum() % v.size() + 1;
	std::string randString = v[rNum];
	return randString;
}




int main(int argc, const char** argv) {
	auto peterPan = vectoredBook("books/peterpan.txt");
	auto emma = vectoredBook("books/emma.txt");
	auto greatGatsby = vectoredBook("books/greatgatsby.txt");
	auto scarletLetter = vectoredBook("books/scarletletter.txt");
	auto treasureIsland = vectoredBook("books/treasureIsland.txt");
	auto comparison = makeVector(0, 33);
	cout << randomWord() << endl;
	
	//Run through 10, 100, 1k, 10k, 100k, 1m, 10m, 100m, 1b
	int lower_bound = 0;
	int upper_bound = 10;
	//Vector Search Test
	if (false) {
		{StopWatch SortTime;
		cout << "Default Sort" << endl;
		for (int i = 0; i < 5; i++) {

			auto a = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
			SortTime.start();
			sort(a.begin(), a.end()); //Sorts using default comparison
			cout << SortTime.stop() << endl;
		}
		}
		{StopWatch SearchTime;
		cout << "Default Search" << endl;
		for (int i = 0; i < 5; i++) {

			vector<int>::iterator it;
			auto b = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
			SearchTime.start();
			it = search(b.begin(), b.end(), comparison.begin(), comparison.end()); // Sorts using search
			cout << SearchTime.stop() << endl;
		}
		}
		{StopWatch BSearchTime;
		cout << "Binary Search" << endl;
		for (int i = 0; i < 5; i++) {

			auto c = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
			BSearchTime.start();
			if (binary_search(c.begin(), c.end(), comparison[1])) // binary Search via the first value stored comparison vector 
			{
				cout << BSearchTime.stop() << endl;
			}
			else
				cout << BSearchTime.stop() << endl;

		}
		}
		{StopWatch ShuffleTime;
		cout << "Shuffle" << endl;
		for (int i = 0; i < 5; i++) {

			auto d = makeVector(lower_bound, upper_bound); // creates a vector length y with random values x-y
			ShuffleTime.start();
			shuffle(d.begin(), d.end(), randGenerator());
			cout << ShuffleTime.stop() << endl;
		}
		}
	} 
	if (true) {

		StopWatch bookReadTime;


	}
}

