#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int asukkaat, int nelioMaara)
{
    asukasMaara = asukkaat;
    neliot = nelioMaara;
    cout << "Asunto maaritetty ";
    cout << "asukkaita= " << asukasMaara  << " nelioita= " << neliot << endl;
}

double Asunto::laskeKulutus(double hintaluku)
{
    return hintaluku * asukasMaara * neliot;
}
