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
	return 3;
}

double StopWatch::stop()
{
	return 3;
}



int main(int argc, const char** argv) {


	StopWatch Default();
	Default();


}