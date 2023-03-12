#include "scene.h"

scene::scene()
{
	name = "scene principal";
	width = 800;
	height = 600;
	color = "black";
	status = true; 
}

scene::scene(int _width, int _height, string _color, bool _status)
{
	name = "scene principal";
	width = _width;
	height = _height;
	color = _color;
	status = _status;
}

//inicializa los respectivos metodos
void scene::drawScene()
{
	cout << "draw scene" << endl;
}

void scene::updateScene()
{
	cout << "update scene" << endl;
}

string scene::statusScene(bool _status)
{
	string sStatus;

	if (_status == true) {
		sStatus = "empty";
	}
	else if (_status == false) {
		sStatus = "full";
	}
	else {
		cout << "error" << endl;
	}
	return sStatus;
}