#include "previewer.h"

previewer::previewer()
{
	name = "piece in L";
	colour = "red";
	//appearance = { {true,true,false},{false, true,false},{false,true,false},{} };
	numOfTiles = 4;
	moving = true;
	velocity = 1.0f;
	positionX = 0;
	positionY = 0;
	//inicializa el previewer
	*pColor = "black";
}

previewer::previewer(string _nombre, string _color)
{
	name = _nombre;
	colour = "red";
	//appearance = { {true,true,false},{false, true,false},{false,true,false},{} };
	numOfTiles = 4;
	moving = true;
	velocity = 1.0f;
	positionX = 0;
	positionY = 0;
	//inicializa el previewer
	*pColor = _color;
}

void previewer::drawPreviewer()
{
	cout << "draw previewer" << endl;
}

void previewer::updatePreviewer()
{
	cout << "update previewer" << endl;
}

void previewer::deletePreviewer()
{
	cout << "delete previewer" << endl;
}
