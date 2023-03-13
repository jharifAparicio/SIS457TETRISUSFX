#include <iostream>
//#include <stdlib.h>
#include "piece.h"
#include "mutantPiece.h"
#include "previewer.h"
#include "scene.h"
#include "information.h"

int main() {
	piece *piece_I = new piece();

	cout<< "nombre.- " << *piece_I->pName << endl <<
		"Color.- " << *piece_I->pColour << endl <<
		"numero de piezas.- " << *piece_I->pNumOfTiles << endl <<
		"movimiento de la pieza.- " << *piece_I->pMoving << endl <<
		"posicion eje X de la pieza.- " << *piece_I->pPositionX << endl <<
		"posicion eje Y de la pieza.- " << *piece_I->pPositionX << endl <<
		"velocidad de la pieza.- " << *piece_I->pVelocity << endl;

	piece_I->moveHorizontal(10);
	piece_I->rotate(120);
	piece_I->sppedUp(20);

	cout << "----------------------------------------------------------------" << endl;
	
	piece *piece_L = new piece("piece L","black");

	cout << "nombre.- " << *piece_L->pName << endl <<
		"Color.- " << *piece_L->pColour << endl <<
		"numero de piezas.- " << *piece_L->pNumOfTiles << endl <<
		"movimiento de la pieza.- " << *piece_L->pMoving << endl <<
		"posicion eje X de la pieza.- " << *piece_L->pPositionX << endl <<
		"posicion eje Y de la pieza.- " << *piece_L->pPositionX << endl <<
		"velocidad de la pieza.- " << *piece_L->pVelocity << endl;

	piece_L->moveHorizontal(5);
	piece_L->rotate(90);
	piece_L->sppedUp(20);

	cout << "----------------------------------------------------------------" << endl;


	mutantPiece *mutantPiece_L_I = new mutantPiece(5, true);

	cout << "nombre.- " << *mutantPiece_L_I->pName << endl <<
		"Color.- " << *mutantPiece_L_I->pColour << endl <<
		"numero de piezas.- " << *mutantPiece_L_I->pNumOfTiles << endl <<
		"movimiento de la pieza.- " << *mutantPiece_L_I->pMoving << endl <<
		"posicion eje X de la pieza.- " << *mutantPiece_L_I->pPositionX << endl <<
		"posicion eje Y de la pieza.- " << *mutantPiece_L_I->pPositionX << endl <<
		"velocidad de la pieza.- " << *mutantPiece_L_I->pVelocity << endl;

	mutantPiece_L_I->copyPiece(5);
	mutantPiece_L_I->stopPiece(20);
	mutantPiece_L_I->changeShape("T");

	mutantPiece_L_I->moveHorizontal(10);

	cout << "----------------------------------------------------------------" << endl;

	mutantPiece *mutantPiece_I_L = new mutantPiece("mutant piece I at L", "red", 10, true);

	cout << "nombre.- " << *mutantPiece_I_L->pName << endl <<
		"Color.- " << *mutantPiece_I_L->pColour << endl <<
		"numero de piezas.- " << *mutantPiece_I_L->pNumOfTiles << endl <<
		"movimiento de la pieza.- " << *mutantPiece_I_L->pMoving << endl <<
		"posicion eje X de la pieza.- " << *mutantPiece_I_L->pPositionX << endl <<
		"posicion eje Y de la pieza.- " << *mutantPiece_I_L->pPositionX << endl <<
		"velocidad de la pieza.- " << *mutantPiece_I_L->pVelocity << endl;

	mutantPiece_I_L->copyPiece(10);
	mutantPiece_I_L->stopPiece(20);
	mutantPiece_I_L->changeShape("I");

	//crea un destructor

	mutantPiece_I_L->~mutantPiece();

	cout << "----------------------------------------------------------------" << endl;

	//creamos un objeto de la clase previewer
	previewer *previewerPiece = new previewer();

	//imprimimos todas las propiedades con punteros
	cout << "nombre.- " << *previewerPiece->pName << endl <<
		"Color.- " << *previewerPiece->pColour << endl <<
		"numero de piezas.- " <<* previewerPiece->pNumOfTiles << endl <<
		"movimiento de la pieza.- " << *previewerPiece->pMoving << endl <<
		"posicion eje X de la pieza.- " <<* previewerPiece->pPositionX << endl <<
		"posicion eje Y de la pieza.- " << *previewerPiece->pPositionX << endl <<
		"velocidad de la pieza.- " << *previewerPiece->pVelocity << endl;

	//llamamos  a los metodos de previewer
	previewerPiece->drawPreviewer();
	previewerPiece->updatePreviewer();
	previewerPiece->deletePreviewer();

	//crea un destructor del objeto previewer
	previewerPiece->~previewer();

	//imprime un separador entre los objetos

	cout << "----------------------------------------------------------------" << endl;

	//creamos el segundo objeto de la clase previewer
	previewer *previewerPiece2 = new previewer("Pieza Rara", "red");

	//imprimimos todas las propiedades de el previewer
	cout << "nombre.- " << *previewerPiece2->pName << endl <<
		"Color.- " << *previewerPiece2->pColour << endl <<
		"numero de piezas.- " << *previewerPiece2->pNumOfTiles << endl <<
		"movimiento de la pieza.- " << *previewerPiece2->pMoving << endl <<
		"posicion eje X de la pieza.- " << *previewerPiece2->pPositionX << endl <<
		"posicion eje Y de la pieza.- " << *previewerPiece2->pPositionX << endl <<
		"velocidad de la pieza.- " <<* previewerPiece2->pVelocity << endl;

	//llamamos  a los metodos de previewer
	previewerPiece2->drawPreviewer();
	previewerPiece2->updatePreviewer();
	previewerPiece2->deletePreviewer();

	//crea un destructor del objeto previewerPiece2
	previewerPiece2->~previewer();

	//imprime un separador entre los objetos
	cout << "----------------------------------------------------------------" << endl;

	//creamos el objeto puntero de la clase scene
	scene *scenePiece = new scene();

	cout << "nombre.- " << *scenePiece->pNameScene<< endl <<
		"Color.- " << *scenePiece->pColorScene << endl <<
		"medidas de el escenario. - " << *scenePiece->pHeightScene <<
		" X " << *scenePiece-> pWidthScene << " pixeles" << endl <<
		"estado del escenario.- " <<
		scenePiece->statusScene (scenePiece->pSStatusScene) << endl;;

	//llamamos a los metodos de la clase scene
	scenePiece-> drawScene();
	scenePiece-> updateScene();

	cout << "----------------------------------------------------------------" << endl;

	//creamos el segundo objeto de la clase scene
	scene *scenePiece2 = new scene(100, 200, "blue", true);

	cout << "nombre.- " << *scenePiece2->pNameScene << endl <<
		"Color.- " << *scenePiece2->pColorScene << endl <<
		"medidas de el escenario. - " << *scenePiece2->pHeightScene <<
		" X " << *scenePiece2->pWidthScene << " pixeles" << endl <<
		"estado del escenario.- " <<
		scenePiece2->statusScene(scenePiece2->pSStatusScene) << endl;

	//llamamos a los metodos de la clase scene
	scenePiece2->drawScene();
	scenePiece2->updateScene();

	cout << "----------------------------------------------------------------" << endl;

	information *information1 = new information;

	cout << "nombre.- " << *information1->pNameInfo << endl <<
		"lines complets.- " << *information1->pLinesInfo << endl <<
		"max score.- " << *information1->pMaxScoreInfo << endl <<
		"current score.- " << *information1->pCurrentScoreInfo << endl <<
		"level.- " << *information1->pLevelInfo << endl <<
		"time.- " << *information1->pHoursInfo << " : " <<
		*information1->pMinutesInfo <<" : " <<
		*information1->pSecondsInfo << endl;

	information1->updateInformation();
	information1->drawInformation();

	cout << "----------------------------------------------------------------" << endl;

	information *information2 = new information("info",10,20,10,0,0,10);

	cout << "nombre.- " << *information2->pNameInfo << endl <<
		"lines complets.- " << *information2->pLinesInfo << endl <<
		"max score.- " << *information2->pMaxScoreInfo << endl <<
		"current score.- " << *information2->pCurrentScoreInfo << endl <<
		"level.- " << *information2->pLevelInfo << endl <<
		"time.- " << *information2->pHoursInfo << " : " <<
		*information2->pMinutesInfo << " : " <<
		*information2->pSecondsInfo << endl;

	//llama a los metodos de la clase information
	information2->updateInformation();
	information2->drawInformation();

	//crea detructores de todos las funciones
	information1->~information();
	information2->~information();

	scenePiece2->~scene();
	scenePiece->~scene();

	previewerPiece2->~previewer();
	previewerPiece->~previewer();

	mutantPiece_I_L->~mutantPiece();
	mutantPiece_L_I->~mutantPiece();


	piece_L->~piece();
};