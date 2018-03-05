#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class individu
{
	//private :
		//données membres
	string NumSecu;
	string nom;
	string prenom;
	int jour_naissance;
	int mois_naissance;
	int annee_naissance;
	string date_naissance;
	string profession;

public:
	individu();
	~individu();

	string getNumSecu();
	string getNom();
	string getPrenom();
	string getDateNaissance(int jour_naissance, int mois_naissance, int annee_naissance);
	string getProfession();

	void setProfession(string mProfession);
	
};

