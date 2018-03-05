#include "individu.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<fstream>
#include <string>

//Prototypage
int menu();
void ajouterindividu(individu individuID[]);
void afficher(individu individuID[]);



int main() {

	individu individuID[100];
	bool tourne = true;

	while (tourne) {

		switch (menu())
		{
		case 1:
			afficher(individuID);

			break;

		case 2:
			ajouterindividu(individuID);
			break;

		case 0:
			tourne = false;

			break;
		}
	}

	return 0;
}

//BUT Affichage d'un menu textuel
//ENTREE
//SORTIE
int menu() {
	int choix = 0;

	system("cls");
	std::cout << "Menu" << std::endl;
	std::cout << "1 Afficher" << std::endl;
	std::cout << "2 Ajouter" << std::endl;
	std::cout << "0 Quitter" << std::endl;
	std::cin >> choix;
	return choix;
}

//BUT ajouter un individu au fichier
//ENTREE
//SORTIE
void ajouterindividu(individu individuID[])
{
	string const individu("C:/Users/Anthony/source/repos/Individu/Fichier/individu.txt"); //à modifier en fonction de là où vous placer le dossier
	ofstream monFlux(individu.c_str());
	string emplacement;
	system("cls");

	cin.ignore();



	std::cout << "\nEntrez votre nom : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}



	std::cout << "\nEntrez votre prenom : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}


	std::cout << "\nEntrez votre adresse : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}


	std::cout << "\nEntrez votre CP : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}


	std::cout << "\nEntrez votre ville : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}

	std::cout << "\nEntrez votre profession : ";
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}

	std::cout << "\nEntrez votre Date de naissance : ";//C'était plus simple de demander la date entière directement
	std::getline(std::cin, emplacement);
	if (monFlux)
	{
		monFlux << emplacement << endl;
	}

	std::cout << "Saisie reussie" << std::endl;
	system("pause");
}

//BUT lire les informations d'un individu dans un fichier
//ENTREE
//SORTIE
void afficher(individu individuID[])
{

	system("cls");

	string const individu("C:/Users/Anthony/source/repos/Individu/Fichier/individu.txt");//à modifier en fonction de là où vous placer le dossier
	ifstream monFlux(individu.c_str());

	if (monFlux)
	{
		string ligne;

		while (getline(monFlux, ligne))
		{
			cout << ligne << endl;
		}
		system("pause");
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;

		system("pause");
	}

}
