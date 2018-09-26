#include "operacionigual.h"
#include <iostream>

using namespace std;
operacionigual::operacionigual()
{
    //ctor
}
void operacionigual::operaciones(int a, int b){
   if (a==b)
    {cout<< a << " ES IGUAL A: " << b << "\n";}
   else {cout << a <<" NO ES IGUAL A: " << b << "\n\n";
   };
}
