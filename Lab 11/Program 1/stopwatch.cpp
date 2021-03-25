#include "stopwatch.h"
StopWatch::StopWatch()
{
	std::cout << "constructor" << std::endl;

}

StopWatch::~StopWatch()
{
	std::cout << "destructor" << std::endl;
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

		return 2;
	}

}

double StopWatch::stop()
{
	if (_running == true) {

		_EndTime = std::chrono::steady_clock::now();
		_running = false;
		return (double)std::chrono::duration_cast<std::chrono::milliseconds>(_EndTime - _StartTime).count();
	}
	else return 0;
}

