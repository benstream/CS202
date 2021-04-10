#include <iostream>
#include <chrono>
#include<algorithm>
#include<random>
#include <vector>




#ifndef STOPWATCH_HPP_
#define STOPWATCH_HPP_

class StopWatch
{
public:
	StopWatch(); //initialize timer
	~StopWatch(); // destructor
	double start(); //starts timer, if running restarts timer and records the time.
	double stop(); // stops timer and records time
	double startSec(); //starts timer, if running restarts timer and records the time.
	double stopSec(); // stops timer and records time

private:
	std::chrono::time_point<std::chrono::steady_clock> _StartTime;
	std::chrono::time_point<std::chrono::steady_clock> _EndTime;
	bool _running = false; 


};
#endif // !STOPWATCH_HPP_