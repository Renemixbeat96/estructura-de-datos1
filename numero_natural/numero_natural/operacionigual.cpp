#include "operacionigual.h"
#include <iostream>

using namespace std;
operacionigual::operacionigual()
{
    //ctor
}
void operacionigual::operaciones(int a, int b){
   if (a==b)
    {cout<<a<<"es igual a : "<<b;}
   else {cout<<a<<" no es igual a : "<<b;};
}
