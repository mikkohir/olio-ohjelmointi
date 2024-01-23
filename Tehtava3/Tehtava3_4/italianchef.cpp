#include "italianchef.h"

ItalianChef::ItalianChef(string myChef,int jauho,int vesi):Chef(myChef)
{
    vedet = vesi;
    jauhot = jauho;
    name = myChef;
    cout << "Chef " << getName() << " konstruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << "Chef " << getName() << " users jauhot = " << jauhot << endl;
    cout << "Chef " << getName() << " users vesi = " << vedet << endl;
}


