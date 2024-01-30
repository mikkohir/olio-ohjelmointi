#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    Kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double kerrosTaloKulutus)
{
    return eka.laskeKulutus(kerrosTaloKulutus) + toka.laskeKulutus(kerrosTaloKulutus) + Kolmas.laskeKulutus(kerrosTaloKulutus);
}
