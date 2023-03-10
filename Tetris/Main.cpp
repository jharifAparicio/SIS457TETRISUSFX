#include <iostream>
#include "piece.h"
#include "mutantPiece.h"
#include "previewer.h"
#include "scene.h"
#include "information.h"

int main() {

	//cout << "hola mundo" << endl;
	piece piece_L("piece L", "FF3003");

	cout << "nombre.- " << piece_L.getNamePiece() << endl <<
		"Color.- " << piece_L.getColourPiece() << endl <<
		"numero de piezas.- " << piece_L.getNumOfTilesPiece() << endl <<
		"movimiento de la pieza.- " << piece_L.getMovingPiece() << endl <<
		"posicion eje X de la pieza.- " << piece_L.getPositionXPiece() << endl <<
		"posicion eje Y de la pieza.- " << piece_L.getPositionYPiece() << endl <<
		"velocidad de la pieza.- " << piece_L.getVelocityPiece() << endl;

	piece_L.moveHorizontal(5);
	cout << "----------------------------------------------------------------" << endl;


	mutantPiece mutantPiece_L_I(5, true);
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
	mutantPiece mutantPiece_I_L("piece I", "red", 10, true);
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

	//creamos un objeto de la clase previewer
	previewer previewerPiece;

	//imprimimos todas las propiedades de el previewer
	cout << "nombre.- " << previewerPiece.getNamePiece() << endl <<
		"Color.- " << previewerPiece.getColourPiece() << endl <<
		"numero de piezas.- " << previewerPiece.getNumOfTilesPiece() << endl <<
		"movimiento de la pieza.- " << previewerPiece.getMovingPiece() << endl <<
		"posicion eje X de la pieza.- " << previewerPiece.getPositionXPiece() << endl <<
		"posicion eje Y de la pieza.- " << previewerPiece.getPositionYPiece() << endl <<
		"velocidad de la pieza.- " << previewerPiece.getVelocityPiece() << endl;

	//llamamos  a los metodos de previewer
	previewerPiece.drawPreviewer();
	previewerPiece.updatePreviewer();
	previewerPiece.deletePreviewer();

	//imprime un separador entre los objetos

	cout << "----------------------------------------------------------------" << endl;

	//creamos el segundo objeto de la clase previewer
	previewer previewerPiece2("Pieza Rara", "red");

	//imprimimos todas las propiedades de el previewer
	cout << "nombre.- " << previewerPiece2.getNamePiece() << endl <<
		"Color.- " << previewerPiece2.getColourPiece() << endl <<
		"numero de piezas.- " << previewerPiece2.getNumOfTilesPiece() << endl <<
		"movimiento de la pieza.- " << previewerPiece2.getMovingPiece() << endl <<
		"posicion eje X de la pieza.- " << previewerPiece2.getPositionXPiece() << endl <<
		"posicion eje Y de la pieza.- " << previewerPiece2.getPositionYPiece() << endl <<
		"velocidad de la pieza.- " << previewerPiece2.getVelocityPiece() << endl;

	//llamamos  a los metodos de previewer
	previewerPiece2.drawPreviewer();
	previewerPiece2.updatePreviewer();
	previewerPiece2.deletePreviewer();

	cout << "----------------------------------------------------------------" << endl;

	//creamos el objeto de la clase scene
	scene scenePiece;

	cout << "nombre.- " << scenePiece.getName() << endl <<
		"Color.- " << scenePiece.getColor() << endl <<
		"medidas de el escenario. - " << scenePiece.getHeight() <<
		" X " << scenePiece.getWidth() << " pixeles" << endl <<
		"estado del escenario.- " <<
		scenePiece.statusScene(scenePiece.getStatus()) << endl;;

	//llamamos a los metodos de la clase scene
	scenePiece.drawScene();
	scenePiece.updateScene();

	cout << "----------------------------------------------------------------" << endl;

	//creamos el segundo objeto de la clase scene
	scene scenePiece2(100, 200, "blue", true);

	cout << "nombre.- " << scenePiece2.getName() << endl <<
		"Color.- " << scenePiece2.getColor() << endl <<
		"medidas de el escenario. - " << scenePiece2.getHeight() <<
		" X " << scenePiece2.getWidth() << " pixeles" << endl <<
		"estado del escenario.- " <<
		scenePiece2.statusScene(scenePiece2.getStatus()) << endl;

	//llamamos a los metodos de la clase scene
	scenePiece2.drawScene();
	scenePiece2.updateScene();

	cout << "----------------------------------------------------------------" << endl;

	information information1;

	cout << "nombre.- " << information1.getName() << endl <<
		"lines complets.- " << information1.getLines() << endl <<
		"max score.- " << information1.getMaxScore() << endl <<
		"current score.- " << information1.getCurrentScore() << endl <<
		"level.- " << information1.getLevel() << endl <<
		"time.- " << information1.getHours() << " : " <<
		information1.getMinutes() <<" : " <<
		information1.getSeconds() << endl;

	cout << "----------------------------------------------------------------" << endl;

	information information2("info",10,20,10,0,0,10);

	cout << "nombre.- " << information2.getName() << endl <<
		"lines complets.- " << information2.getLines() << endl <<
		"max score.- " << information2.getMaxScore() << endl <<
		"current score.- " << information2.getCurrentScore() << endl <<
		"level.- " << information2.getLevel() << endl <<
		"time.- " << information2.getHours() << " : " <<
		information2.getMinutes() << " : " <<
		information2.getSeconds() << endl;

	//llama a los metodos de la clase information
	information2.updateInformation();
	information2.drawInformation();

};