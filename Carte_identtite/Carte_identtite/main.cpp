/* 
carte.cpp : Définit le point d'entrée pour l'application console.
*/
#include "stdafx.h"
#include "carte.h"


//prototypage
int menu();
void addCard(carte carteID[]);
void affiche(carte carteID[]);
void modifCard(carte carteID[]);
void deleteCard(carte carteID[]);
int findEmpty(carte carteID[]);

//main
int main() {

	carte carte[100];
	bool choice = true;

	while (choice) 
	{

		switch (menu())
		{

		case 1:
			affiche(carte);
			break;

		case 2:
			addCard(carte);
			break;

		case 3:
			modifCard(carte);
			break;

		case 4:
			deleteCard(carte);
			break;

		case 0:
			choice = false;
			break;
		}
	}

	return 0;
}



//fonctions&procédures

//BUT
//ENTREE
//SORTIE
int menu() {
	int choix = 0;

	system("cls");
	std::cout << "~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~Menu~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	std::cout << "1 - Show" << std::endl;//case1
	std::cout << "2 - Add" << std::endl;//case2
	std::cout << "3 - Modif" << std::endl;//case3
	std::cout << "4 - Delete" << std::endl;//case4
	std::cout << "0 - Exit" << std::endl;//case0
	std::cin >> choix;
	return choix;
}

//BUT
//ENTREE
//SORTIE
void addCard(carte carteID[])
{
	int vide = findEmpty(carteID);
	string statement;
	system("cls");

	cin.ignore();//vide buffer

	carteID[vide].setID(vide);

	std::cout << "\nEntrez votre Nom : ";
	std::getline(std::cin, statement);

	carteID[vide].setNOM(statement);

	std::cout << "\nEntrez votre Prenom : ";
	std::getline(std::cin, statement);

	carteID[vide].setPRENOM(statement);

	std::cout << "\nEntrez votre Adresse : ";
	std::getline(std::cin, statement);

	carteID[vide].setADRESSE(statement);

	std::cout << "\nEntrez votre Code Postal : ";
	std::getline(std::cin, statement);

	carteID[vide].setCP(statement);

	std::cout << "\nEntrez votre Ville : ";
	std::getline(std::cin, statement);

	carteID[vide].setVILLE(statement);

	std::cout << "Saisie correcte !" << std::endl;
	system("pause");
}

//BUT
//ENTREE
//SORTIE
int findEmpty(carte carteID[])
{
	int i = 1;

	while (carteID[i].getID() != 0) {
		i++;

	}
	return i;
}

//BUT
//ENTREE
//SORTIE
void affiche(carte carteID[])
{
	int id = 0;

	system("cls");
	cin.ignore();

	std::cout << "Entrez un ID a afficher :" << endl;
	std::cin >> id;

	if (carteID[id].getID() == 0) {

		std::cout << "Cet ID est invalide !" << std::endl;
	}
	else {
		carteID[id].affiche();
	}

	system("pause");
}

//BUT
//ENTREE
//SORTIE
void modifCard(carte carteID[])
{
	int id = 0;

	system("cls");
	cin.ignore();

	std::cout << "Entrez ID de la carte a modifier :" << endl;
	std::cin >> id;

	if (carteID[id].getID() == 0) {
		std::cout << "Cet ID est invalide !" << std::endl;

		}else {
			string statement;
			system("cls");

			cin.ignore();//vide memoire cin

			carteID[id].setID(id);

			std::cout << "\nEntrez votre Nom : ";
			std::getline(std::cin, statement);

			carteID[id].setNOM(statement);

			std::cout << "\nEntrez votre Prenom : ";
			std::getline(std::cin, statement);

			carteID[id].setPRENOM(statement);

			std::cout << "\nEntrez votre Adresse : ";
			std::getline(std::cin, statement);

			carteID[id].setADRESSE(statement);

			std::cout << "\nEntrez votre Code Postal : ";
			std::getline(std::cin, statement);

			carteID[id].setCP(statement);

			std::cout << "\nEntrez votre Ville : ";
			std::getline(std::cin, statement);

			carteID[id].setVILLE(statement);

			std::cout << "\nSaisie correcte !" << std::endl;
		}

	system("pause");
}

//BUT
//ENTREE
//SORTIE
void deleteCard(carte carteID[])

{
	int id = 0;

	system("cls");
	cin.ignore();

	std::cout << "Entrez ID de la carte a supprimer :" << endl;
	std::cin >> id;

	if (carteID[id].getID() == 0) {
		std::cout << "Cet ID est invalide" << std::endl;

		}else{
			carteID[id].setID(0);
		}
}

