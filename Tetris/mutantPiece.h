#pragma once
#include "piece.h"
#include <iostream>

class mutantPiece :
	public piece
{
private:
	//propeties
	int numOfCopies;
	bool modifyForm;
public:
	//constructor
	mutantPiece(int,bool);

	mutantPiece(string _name, string _colour, int _numOfCopies, bool _modifyForm);

	//methods accesors
	int getnumOfCopiesMutant() {
		return numOfCopies;
	}
	bool getModifyFormMutant() {
		return modifyForm;
	}

	void copyPiece(int _numOfCopies);
	void stopPiece(int _time);
	void changeShape(string _newForm);
};

