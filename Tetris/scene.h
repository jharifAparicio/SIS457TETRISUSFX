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

	//crea metodos accesores
	string getName() {
		return name;
	}
	int getWidth() {
		return width;
	}

	int getHeight() {
		return height;
	}

	string getColor() {
		return color;
	}

	bool getStatus() {
		return status;
	}

	//crea sus metodos
	void drawScene();
	void updateScene();
	string statusScene(bool _status);
	
protected:
};

