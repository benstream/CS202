#include <fstream>
#include <iostream>
#include <ios>
#include <vector>

using std::ios;
using std::cout;
using std::endl;
using std::vector;
using std::ifstream;

int main() {
	ifstream in{ "data.dat", ios::binary | ios::in };
	vector<int> storage;
	int i;
	while (true) {
		in.read(reinterpret_cast<char*>(&i), sizeof(int));
		if (!in) {
			if (in.eof()) {
				break;
			}
		cout << "Error during read" << endl;
		return -1;
	}
	storage.push_back(i);

}
	cout << "Total ints: " << storage.size() << endl;
	int sum = 0;
	double avg = 0;

	for (int k : storage) sum += k;
	avg = ((double)sum) / storage.size();

	cout << "Sum: " << sum << endl;
	cout << "Average: " << avg << endl;
}

