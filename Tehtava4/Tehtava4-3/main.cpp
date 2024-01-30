#include <iostream>
#include "kerrostalo.h"

int main()
{
    Kerrostalo asu;
    double Hinta = 1;
    cout << "Kerrostalon kulutus, kun hinta = " << Hinta << " on " << asu.laskeKulutus(Hinta) << endl;
    return 0;
}
