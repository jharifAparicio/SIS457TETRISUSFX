#include "mutantPiece.h"

mutantPiece::mutantPiece(int _numOfCopies, bool _modifyForm)
{
	numOfCopies = _numOfCopies;
	modifyForm = _modifyForm;
	name = "mutant piece L at T";
	colour = "blue";
}

mutantPiece::mutantPiece(string _name, string _colour,
	int _numOfCopies, bool _modifyForm) :piece(_name, _colour),
	numOfCopies(_numOfCopies), modifyForm(_modifyForm)
{
}

void mutantPiece::copyPiece(int _numOfCopies)
{
	cout << "the piece was copied " << _numOfCopies << " times" << endl;
}

void mutantPiece::stopPiece(int _time)
{
	cout << "the piece stopped " << _time << " secunds" << endl;
}

void mutantPiece::changeShape(string _newForm)
{
	cout << "the piece changed shape at "+ _newForm << endl;
}

//void piece::rotate(int _angle)
//{
//	cout << "rotate 90°" << endl;
//}
//
//void piece::moveHorizontal(int _positionX)
//{
//	cout << "move piece 1 left" << endl;
//}
//
//void piece::sppedUp(int _direction)
//{
//	cout << "velocity X2" << endl;
//}