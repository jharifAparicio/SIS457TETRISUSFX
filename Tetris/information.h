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

	string *pNameInfo = &name;
	int *pLinesInfo = &lines;
	int *pMaxScoreInfo = &maxScore;
	int *pCurrentScoreInfo = &currentScore;
	int *pLevelInfo = &level;
	int *pHoursInfo = &hours;
	int *pMinutesInfo = &minutes;
	int *pSecondsInfo = &seconds;

	//crea sus metodos
	void drawInformation();
	void updateInformation();
protected:

};

