#pragma once
#include <iostream>
#include <vector>
#include "piece.h"

class previewer :
	public piece
{
protected:
	//genera las propiedades nesesarias de una clase previewer
	string color;
	vector<vector<bool>> appearance;

public:
	previewer();
	previewer(string _nombre, string _color);

	//methods accesors

	string* pColor = &color;
	//class methods
	void drawPreviewer();
	void updatePreviewer();
	void deletePreviewer();

private:

};

