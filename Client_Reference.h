#pragma once
#include "Compte.h"
#include "Date.h"
class Client_Reference
{
private:
	string nom;
	string prenom;
	string cin;
	Compte& compte;
	Date date;
public:
	Client_Reference(string, string, string, Compte&, Date);
	void afficher() const;
};
