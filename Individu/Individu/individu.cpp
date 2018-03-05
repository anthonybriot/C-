#include "individu.h"

individu::individu()
{
}


individu::~individu()
{
}

string individu::getNumSecu()
{
	return NumSecu;
}

string individu::getNom()
{
	return nom;
}

string individu::getPrenom()
{
	return prenom;
}

string individu::getDateNaissance(int jour_naissance, int mois_naissance, int annee_naissance)
{
	string date_naissance = to_string(jour_naissance) + "/" + to_string(mois_naissance) + "/" + to_string(annee_naissance);

	return date_naissance;
}

string individu::getProfession()
{
	return profession;
}

void individu::setProfession(string mProfession)
{
	individu::profession = mProfession;
}




