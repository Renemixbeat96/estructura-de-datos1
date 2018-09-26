#include <iostream>
#include "sucesor.h"
#include "antecesor.h"
#include "operacionsuma.h"
#include "operacionigual.h"
#include "operacion0.h"
#include "operacionmenor.h"
#include "operaciondiferencia.h"
using namespace std;

int main()
{
    int numerox1,numeroy2, numero1,numero2,numeroa,numerob,opcion,a,b;
    sucesor suce;
    antecesor ante;
    operacionsuma sum;
    operaciondiferencia dif;
    operacionmenor men;
    operacionigual ig;


    do {
        cout << "\nde las opciones cual va a escoger\n1.-sucesor \n2.-antecesor\n3.-suma\n4.-diferencia \n5.-operacion menor\n6.-igual\n";
        cin >> opcion;
        switch (opcion){
        case 1:
            cout << "escogistes el sucesor de un numero natural\n";
            cout << "escribe numero\n";
            cin >> numerox1;
            cout << "el sucesor es:  = "<<suce.operaciones(numerox1)<<"\n";
            break;
        case 2:
            cout << "escogistes el antecesor de un numero natural\n";
            cout << "escribe numero\n";
            cin >> numeroy2;
            cout << "el antecesor es:  = "<<ante.operaciones(numeroy2)<<"\n";
            break;
        case 3:
            cout << "suma de dos numeros naturales\n";
            cout << "escribe numero 1\n";
            cin >> numero1;
            cout << "escribe numero 2\n";
            cin >> numero2;
            cout << "la suma es: = " << sum.operaciones(numero1,numero2) << "\n";
            break;
        case 4:
            cout << "diferencia de dos numeros naturales\n";
            cout << "escribe numero 1\n";
            cin >> numero1;
            cout << "escribe numero 2\n";
            cin >> numero2;
            cout << "la diferencia de los numeros naturales es: = " << dif.operaciones(numero1, numero2) << "\n";
            break;
         case 5:
            cout << "*************el numero menor***********\n";
            cout << "primer numero\n";
            cin >> numeroa;
            cout << "segundo numero\n";
            cin >> numerob;
            cout << "el menor es: = " << men.operaciones(numeroa,numerob) << "\n";
        case 6:
            cout << "*************el numero igual***********\n";
            cout << "primer numero\n";
            cin >> a;
            cout << "segundo numero\n";
            cin >> b;
            ig.operaciones(a,b);
            break;
        case 7:
            cout <<"fin del programa";
            break;
        default :
            cout << "no es valido la opcion\n escoge el numero ingresado en el programa\n";
            break;
        }
    }while (opcion<7 || opcion>7);
    return 0;
}



