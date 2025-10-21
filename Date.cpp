#include "Date.h"

Date::Date(int j, int m, int a)
{
	this->jour = j;
	this->moi = m;
	this->annee = a;
}

void Date::afficher() const
{
	cout << "Date :" << this->jour << "/" << this->moi << "/" << this->annee << endl;
}
