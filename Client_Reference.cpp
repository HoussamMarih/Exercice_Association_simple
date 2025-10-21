#include "Client_Reference.h"

Client_Reference::Client_Reference(string nom, string prenom, string cin, Compte& acc, Date date):compte(acc)
{
	this->nom = nom;
	this->prenom = prenom;
	this->cin = cin;
	this->date = date;
}

void Client_Reference::afficher() const
{
	cout << "Nom :" << this->nom << endl;
	cout << "Prenom :" << this->prenom << endl;
	cout << "CIN :" << this->cin << endl;
	this->compte.afficher();
	this->date.afficher();
}

