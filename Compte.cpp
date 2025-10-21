#include "Compte.h"

Compte::Compte(int num, double sol, string dev)
{
	this->num_compte = num;
	this->solde = sol;
	this->devise = dev;
}

Compte::Compte(const Compte& c)
{
	this->num_compte = c.num_compte;
	this->solde = c.solde;
	this->devise = c.devise;
}

void Compte::afficher() const
{
	cout << "Numéro de compte : " << num_compte << endl;
	cout << "Solde : " << solde << " " << devise << endl;
}


