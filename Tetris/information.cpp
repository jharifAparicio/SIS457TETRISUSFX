#include "information.h"

information::information()
{
	name = "information";
	lines = 0;
	maxScore = 0;
	currentScore = 0;
	level = 0;
	hours = 0;
	minutes = 0;
	seconds = 0;
}

information::information(string _name, int _lines, int _score, int _level, int _hours, int _minutes, int _seconds)
{
	name = _name;
	lines = _lines;
	maxScore = _score;
	currentScore = _score;
	level = _level;
	hours = _hours;
	minutes = _minutes;
	seconds = _seconds;
}

//crea los metodos
void information::drawInformation()
{
	std::cout << "draw information" << std::endl;
}

void information::updateInformation()
{
	std::cout << "update information" << std::endl;
}