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

//BUT	Afficher un menu à l'utilisateur
//ENTREE	
//SORTIE	Menu
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

//BUT	Ajouter une carte dans le tableau
//ENTREE	Les parametres a inserer dans le tableau
//SORTIE	Si la saisie a fonctionner
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

//BUT	Verifier les ID de chaque carte jusqu'a ce qu'un ID soit egal a 0
//ENTREE	Les ID de chaque carte
//SORTIE	premier ID de la carte égal à 0
int findEmpty(carte carteID[])
{
	int i = 1;

	while (carteID[i].getID() != 0) {
		i++;

	}
	return i;
}

//BUT	Afficher la carte d'identité de la carte associé à l'ID demander
//ENTREE	ID de la carte à afficher
//SORTIE	paramètres lié à la carte
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

//BUT	Modifier les paramètres de la carte lié à l'ID entrer
//ENTREE	ID et paramètres pour la modif de la carte
//SORTIE	Si la saisie est correcte et paramètres sont modifiés
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

			cin.ignore();//vide buffer

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

//BUT	Suppression d'une carte par l'ID
//ENTREE	ID de la carte à supprimer
//SORTIE	supression de la carte
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

