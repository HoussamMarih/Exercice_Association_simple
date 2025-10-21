#include "Client_Adresse.h"

Client_Adresse::Client_Adresse(string nom, string prenom, string cin, Compte* acc,Date date)
{
	this->nom = nom;
	this->prenom = prenom;
	this->cin = cin;
	this->compte = acc;
	this->date = date;
}

void Client_Adresse::afficher() const
{
	cout << "Nom :" << this->nom << endl;
	cout << "Prenom :" << this->prenom << endl;
	cout << "CIN :" << this->cin << endl;
	this->compte->afficher();
	this->date.afficher();
}

