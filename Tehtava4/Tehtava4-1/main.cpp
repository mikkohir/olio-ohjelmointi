#include <iostream>
#include "asunto.h"

int main()
{
    Asunto asu;
    asu.maarita(2,100);
    double Hinta = 1;
    cout << "asunnon kulutus kun hinta= " << Hinta << " on " << asu.laskeKulutus(Hinta) << endl;
    return 0;
}
