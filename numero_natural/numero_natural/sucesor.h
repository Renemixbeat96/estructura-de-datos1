#ifndef SUCESOR_H
#define SUCESOR_H

#include <operacioncentral.h>


class sucesor : public operacioncentral
{
    public:
        sucesor();

        int Getnumerox() { return numerox; }
        void Setnumerox(int val) { numerox = val; }

        float operaciones(int numerox);

    protected:

    private:
        int numerox;
};

#endif // SUCESOR_H
