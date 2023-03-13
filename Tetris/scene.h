#pragma once
#include <iostream>

using namespace std;

class scene
{
private:
	string name;
	int width;
	int height;
	string color;
	bool status; //true = empty, false = full
	string sStatus;

public:
	//constructors
	scene();
	scene(int _width, int _height, string _color, bool _status);

	string *pNameScene = &name;
	int *pWidthScene = &width;
	int *pHeightScene = &height;
	string *pColorScene = &color;
	bool *pStatusScene = &status;
	string *pSStatusScene = &sStatus;

	//crea sus metodos
	void drawScene();
	void updateScene();
	string statusScene(bool _status);
	
protected:
};

