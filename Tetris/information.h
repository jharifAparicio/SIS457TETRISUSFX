#pragma once
#include <iostream>

using namespace std;
class information
{
private:
	string name;
	int lines;
	int maxScore;
	int currentScore;
	int level;
	int hours, minutes, seconds;
public:
	//crea un constructor
	information();
	information(string _name, int _lines, int _score, int _level, int _hours, int _minutes, int _seconds);

	//crea metodos accesores
	std::string getName() {
		return name;
	}
	
	int getLines() {
		return lines;
	}

	int getMaxScore() {
		return maxScore;
	}

	int getCurrentScore() {
		return currentScore;
	}

	int getLevel() {
		return level;
	}

	int getHours() {
		return hours;
	}

	int getMinutes() {
		return minutes;
	}

	int getSeconds() {
		return seconds;
	}

	//crea sus metodos
	void drawInformation();
	void updateInformation();
protected:

};

