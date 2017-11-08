#include "stdafx.h"
#include "carte.h"


/*carte::carte(int mid, string mnom, string mprenom, string madresse, string mCP, string mville)
{
	id = mid;
	nom = mnom;
	prenom = mprenom;
	adresse = madresse;
	CP = mCP;
	ville = mville;

}*/

carte::carte()
{
	setID(0);
}
carte::~carte()
{
}


//GET
int carte::getID()
{
	return id;
}
string carte::getNOM()
{
	return nom;
}
string carte::getPRENOM()
{
	return prenom;
}
string carte::getADRESSE()
{
	return adresse;
}
string carte::getCP()
{
	return CP;
}
string carte::getVILLE()
{
	return ville;
}


//SET
void carte::setID(int mid)
{
	carte::id = mid;
}

void carte::setNOM(string mnom)
{
	carte::nom=mnom;
}

void carte::setPRENOM(string mprenom)
{
	carte::prenom = mprenom;
}

void carte::setADRESSE(string madresse)
{
	carte::adresse = madresse;
}

void carte::setCP(string mCP)
{
	carte::CP = mCP;
}

void carte::setVILLE(string mville)
{
	carte::ville = mville;
}




void carte::affiche()
{
	
	cout << carte::getID() << endl;
	cout << carte::getNOM() << endl;
	cout << carte::getPRENOM() << endl;
	cout << carte::getADRESSE() << endl;
	cout << carte::getCP() << endl;
	cout << carte::getVILLE() << endl;

}

void carte::suppression()
{
	carte::setID(0);
	carte::setNOM("");
	carte::setPRENOM("");
	carte::setADRESSE("");
	carte::setCP("");
	carte::setVILLE("");
}
