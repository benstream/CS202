#include "stopwatch.h"




int main() {
	StopWatch Default;
	StopWatch TotalTime;
	TotalTime.start();
	Default.start();
	for (int i = 0; i < 100; i++) {
		
		
		for (int i = 0; i < 100; i++) { cout << "x"; }
		cout << endl;
		cout << Default.start() << std::endl;
	}
	for (int i = 0; i < 100; i++) {


		for (int i = 0; i < 100; i++) { cout << "x"; }
		
	}
	cout << endl;
	cout << Default.stop() << endl;
	
	cout << TotalTime.stop() << endl;
}