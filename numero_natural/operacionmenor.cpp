#include "operacionmenor.h"

operacionmenor::operacionmenor()
{
    //ctor
}
float operacionmenor::operaciones(int numeroa, int numerob){
   int m;
   if (numeroa < numerob)
   m= numeroa;
   else m=numerob;
      return m;
}
