#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso;
    toka = new Kerros;
    Kolmas = new Kerros;
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    Kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double kerrosTaloKulutus)
{
    return eka->laskeKulutus(kerrosTaloKulutus) + toka->laskeKulutus(kerrosTaloKulutus) + Kolmas->laskeKulutus(kerrosTaloKulutus);
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete Kolmas;
    eka=nullptr;
    toka=nullptr;
    Kolmas=nullptr;
}
