#include <iostream>
#include "piece.h"
#include "mutantPiece.h"

using namespace std;

int main() {
	
	//cout << "hola mundo" << endl;
	piece piece_L("piece L", "FF3003");

	cout <<"nombre.- "<< piece_L.getNamePiece() << endl <<
		"Color.- "<< piece_L.getColourPiece() << endl <<
		"numero de piezas.- "<< piece_L.getNumOfTilesPiece() << endl <<
		"movimiento de la pieza.- "<< piece_L.getMovingPiece() << endl <<
		"posicion eje X de la pieza.- "<< piece_L.getPositionXPiece() << endl <<
		"posicion eje Y de la pieza.- "<< piece_L.getPositionYPiece() << endl <<
		"velocidad de la pieza.- "<< piece_L.getVelocityPiece() << endl;
	
	piece_L.moveHorizontal(5);
	cout << "----------------------------------------------------------------" << endl;
	

	mutantPiece mutantPiece_L_I(5,true);
	cout << "nombre.- " << mutantPiece_L_I.getNamePiece() << endl <<
		"Color.- " << mutantPiece_L_I.getColourPiece() << endl <<
		"numero de piezas.- " << mutantPiece_L_I.getNumOfTilesPiece() << endl <<
		"movimiento de la pieza.- " << mutantPiece_L_I.getMovingPiece() << endl <<
		"posicion eje X de la pieza.- " << mutantPiece_L_I.getPositionXPiece() << endl <<
		"posicion eje Y de la pieza.- " << mutantPiece_L_I.getPositionYPiece() << endl <<
		"velocidad de la pieza.- " << mutantPiece_L_I.getVelocityPiece() << endl;

	mutantPiece_L_I.copyPiece(5);
	mutantPiece_L_I.stopPiece(20);
	mutantPiece_L_I.changeShape("T");

	piece_L.moveHorizontal(5);

	cout << "----------------------------------------------------------------" << endl;
	mutantPiece mutantPiece_I_L("piece I","red",10,true);
	cout << "nombre.- " << mutantPiece_L_I.getNamePiece() << endl <<
		"Color.- " << mutantPiece_L_I.getColourPiece() << endl <<
		"numero de piezas.- " << mutantPiece_L_I.getNumOfTilesPiece() << endl <<
		"movimiento de la pieza.- " << mutantPiece_L_I.getMovingPiece() << endl <<
		"posicion eje X de la pieza.- " << mutantPiece_L_I.getPositionXPiece() << endl <<
		"posicion eje Y de la pieza.- " << mutantPiece_L_I.getPositionYPiece() << endl <<
		"velocidad de la pieza.- " << mutantPiece_L_I.getVelocityPiece() << endl;

	mutantPiece_L_I.copyPiece(10);
	mutantPiece_L_I.stopPiece(20);
	mutantPiece_L_I.changeShape("I");
	cout << "----------------------------------------------------------------" << endl;
};