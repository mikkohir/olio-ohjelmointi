#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double kerrosKulutus)
{
    return as1.laskeKulutus(kerrosKulutus) + as2.laskeKulutus(kerrosKulutus) + as3.laskeKulutus(kerrosKulutus) + as4.laskeKulutus(kerrosKulutus);
}
