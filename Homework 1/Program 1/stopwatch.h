#include <iostream>
#include <chrono>
using std::cout;
using std::endl;



#ifndef STOPWATCH_H_
#define STOPWATCH_H_

class StopWatch
{
public:
	StopWatch(); //will start timer
	~StopWatch(); // destructor
	void start(); //stops current timer and restarts as well as saves time.
	void stop(); // stops timer and records time


private:
	double _time;



};





#endif // !STOPWATCH_H__

