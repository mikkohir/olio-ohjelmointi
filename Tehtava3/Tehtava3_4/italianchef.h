#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class ItalianChef : public Chef
{
public:
    ItalianChef(string,int,int);
    string getName();
    void makePasta();
private:
    int jauhot;
    int vedet;
};

#endif // ITALIANCHEF_H
