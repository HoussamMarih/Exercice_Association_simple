#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int jour;
	int moi;
	int annee;
public:
	Date(int j=0, int m=0, int a=0);
	void afficher() const;
};

