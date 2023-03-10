#pragma once
#include <iostream>
#include <vector>

using namespace std;

class piece
{
protected:
	string name;
	string colour;
	//propeties of class piece
	vector<vector<bool>> appearance;
	int numOfTiles;
	bool moving;
	float velocity;
	int positionX;
	int positionY;

public:
	piece();
	piece(string _name, string _colour);
	//methods accesors
	string getNamePiece() {
		return name;
	}

	string getColourPiece() {
		return colour;
	}

	/*bool getAppeareace() {
		return appearance <ve<>>;
	}*/

	int getNumOfTilesPiece() {
		return numOfTiles;
	}

	bool getMovingPiece() {
		return moving;
	}
	float getVelocityPiece() {
		return velocity;
	}
	int getPositionXPiece() {
		return positionX;
	}
	int getPositionYPiece() {
		return positionY;
	}

	//class methods
	void rotate(int _angle);
	void moveHorizontal(int _positionX);
	void sppedUp(int _direction);
};

