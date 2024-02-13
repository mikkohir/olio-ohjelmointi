#include "kerros.h"

Kerros::Kerros()
{
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

double Kerros::laskeKulutus(double kerrosKulutus)
{
    return as1->laskeKulutus(kerrosKulutus) + as2->laskeKulutus(kerrosKulutus) + as3->laskeKulutus(kerrosKulutus) + as4->laskeKulutus(kerrosKulutus);
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    as1=nullptr;
    as2=nullptr;
    as3=nullptr;
    as4=nullptr;
}
