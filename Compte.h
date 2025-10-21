#pragma once
#include <iostream>
using namespace std;
class Compte
{
private:
	int num_compte;
	double solde;
	string devise;
public:
	Compte(int num=0,double sol=0,string dev="MAD");
	Compte(const Compte&);
	void afficher() const;
};

