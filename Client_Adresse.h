#pragma once
#include "Compte.h"
#include "Date.h"
class Client_Adresse
{
private:
	string nom;
	string prenom;
	string cin;
	Compte* compte;
	Date date;
public:
	Client_Adresse(string,string,string,Compte*,Date);
	void afficher() const;
};

