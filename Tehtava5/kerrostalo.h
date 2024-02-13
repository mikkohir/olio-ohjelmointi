#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"


class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);
    ~Kerrostalo();
private:
    //pointtereiksi?
    Katutaso * eka;
    Kerros * toka;
    Kerros * Kolmas;
};
#endif // KERROSTALO_H
