#include <iostream>
#include "Compte.h"
#include "Client_Adresse.h"
#include "Client_Reference.h"
#include "Date.h"
int main()
{
    Compte* acc1 = new Compte(1, 2300, "MAD");
    Date date1(21, 10, 2025);
    Client_Adresse c1("Mohamed", "Amine", "B222B", acc1, date1);
    c1.afficher();

    Compte acc2(2, 5200, "MAD");
    Date date2(13, 11, 2023);
    Client_Reference c2("Malak", "Bennani", "C111C", acc2, date2);
    c2.afficher();
    delete acc1;

}
