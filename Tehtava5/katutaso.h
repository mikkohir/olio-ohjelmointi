#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    Asunto * as1;
    Asunto * as2;// pointteriksi?
    void maaritaAsunnot();
    double laskeKulutus(double);
    ~Katutaso();
};


#endif // KATUTASO_H
