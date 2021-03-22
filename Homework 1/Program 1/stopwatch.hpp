#include <iostream>
#include <chrono>
using std::cout;
using std::endl;



#ifndef STOPWATCH_HPP_
#define STOPWATCH_HPP_

class StopWatch
{
public:
	StopWatch(); //will start timer
	~StopWatch(); // destructor
	double start(); //stops current timer and restarts as well as saves time.
	double stop(); // stops timer and records time


private:
	//double _time;



};
#endif // !STOPWATCH_HPP_

