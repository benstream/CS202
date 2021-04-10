#include "stopwatch.h"
using std::cout;
using std::endl;

StopWatch::StopWatch()
{
	cout << "constructor" << endl;

}

StopWatch::~StopWatch()
{
	cout << "destructor" << endl;
}

double StopWatch::start()
{
	if (_running == false) {
		_StartTime = std::chrono::steady_clock::now();
		_running = true;
		return 1;
	}
	else
	{
		StopWatch::stop();
		stop();
		_StartTime = std::chrono::steady_clock::now();
		_running = true;

		return 2; //2 means clock has been retagged
	}

}

double StopWatch::stop()
{
	if (_running == true) {

		_EndTime = std::chrono::steady_clock::now();
		_running = false;
		return (double)std::chrono::duration_cast<std::chrono::milliseconds>(_EndTime - _StartTime).count(); //returning time in ms and doubleifying the long longs
	}
	else return 0;
}

