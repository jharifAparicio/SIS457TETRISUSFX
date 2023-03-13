#include "piece.h"

piece::piece()
{
	name = "piece I";
	colour = "red";
	//appearance = { {true,true,false},{false, true,false},{false,true,false},{} };
	numOfTiles = 4;
	moving = true;
	velocity = 1.0f;
	positionX = 50;
	positionY = 100;
}

piece::piece(string _name, string _colour) {
	name = _name;
	colour = _colour;
	//appearance = { {true,true,false},{false, true,false},{false,true,false},{} };
	numOfTiles = 4;
	moving = true;
	velocity = 1.0f;
	positionX = 50;
	positionY = 100;
}
void piece::rotate(int _angle)
{
	cout << "rotate: "<< _angle << endl;
}

void piece::moveHorizontal(int _positionX)
{
	cout << "move piece 1 left" << endl;
}

void piece::sppedUp(int _direction)
{
	cout << "velocity x: "<< _direction << endl;
}
