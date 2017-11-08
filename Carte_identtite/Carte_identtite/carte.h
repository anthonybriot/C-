#pragma once
#include <iostream>
#include <string>

using namespace std;

class carte
{
	//private :

		//données membres
	int id;
	string nom;
	string prenom;
	string adresse;
	string CP;
	string ville;
	
public:
	//carte(int mid, string mnom, string mprenom, string madresse, string mCP, string mville);
	carte();
	~carte();

	int getID();
	string getNOM();
	string getPRENOM();
	string getADRESSE();
	string getCP();
	string getVILLE();
	
	void setID(int mid);
	void setNOM(string mnom);
	void setPRENOM(string mprenom);
	void setADRESSE(string madresse);
	void setCP(string mCP);
	void setVILLE(string mville);

	void affiche();//affiche une carte
	void suppression();//supprime une carte

	
};

