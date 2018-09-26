#ifndef OPERACIONMENOR_H
#define OPERACIONMENOR_H

#include <operacioncentral.h>


class operacionmenor : public operacioncentral
{
    public:
        operacionmenor();

        int Getnumeroa() { return numeroa; }
        void Setnumeroa(int val) { numeroa = val; }
        int Getnumerob() { return numerob; }
        void Setnumerob(int val) { numerob = val; }
        float operaciones(int numeroa, int numerob);

    protected:

    private:
        int numeroa;
        int numerob;
};

#endif // OPERACIONMENOR_H
