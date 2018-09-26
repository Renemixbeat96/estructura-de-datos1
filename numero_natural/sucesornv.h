#ifndef SUCESORNV_H
#define SUCESORNV_H

#include "operacioncentral.h"


class sucesornv : public operacioncentral
{
    public:
        sucesornv();

        int Getnumerox() { return numerox; }
        void Setnumerox(int val) { numerox = val; }

        float operaciones(int numerox);

    protected:

    private:
        int numerox;
};

#endif // SUCESORNV_H
