#include <iostream>
#include "kerrostalo.h"

int main()
{
    // Vastauksena kotitehtävään : Kaavioon lisätään destruktorit Katutasolle, Kerrokselle ja Kerrostalolle, jossa pointterit tuhotaan
    Kerrostalo * asu;
    asu = new Kerrostalo;
    double Hinta = 1;
    cout << "Kerrostalon kulutus, kun hinta = " << Hinta << " on " << asu->laskeKulutus(Hinta) << endl;
    delete asu;
    asu=nullptr;
    return 0;
}
