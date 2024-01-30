#include <iostream>
#include "katutaso.h"

int main()
{
    Katutaso asu;
    asu.maaritaAsunnot();
    double Hinta = 1;
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << Hinta << " on " << asu.laskeKulutus(Hinta) << endl;
    return 0;
}
