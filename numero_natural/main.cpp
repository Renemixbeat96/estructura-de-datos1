#include <iostream>
#include "stdlib.h"
#include "sucesor.h"
#include "antecesor.h"
#include "operacionsuma.h"
#include "operacionigual.h"
#include "operacionmenor.h"
#include "operaciondiferencia.h"
using namespace std;

int main()
{
    int numerox,numeroy2, numero1,numero2,numeroa,numerob,opcion,a,b;
    sucesor suce;
    antecesor ante;
    operacionsuma sum;
    operaciondiferencia dif;
    operacionmenor men;
    operacionigual ig;


    do {
        cout << "******NUMEROS NATURALES******\n";
        cout << "\nESCOJA UNA OPCION\n";
        cout << "\n1.SUCESOR\n";
        cout << "2.ANTECESOR\n";
        cout << "3.SUMA\n";
        cout << "4.DIFERENCIA\n";
        cout << "5.MENOR\n";
        cout << "6.IGUAL\n";
        cout << "7.SALIR\n";
        cout << "\n---> ";
        cin >> opcion;
        system ("cls");
        switch (opcion){
        case 1:
            cout << "\n******SUCESOR DE UN NUMERO NATURAL******\n";
            cout << "\nDAME NUMERO\n";
            cin >> numerox;
            cout << "EL SUCESOR ES: "<<suce.operaciones(numerox)<<"\n\n";
            system ("pause");
            system ("cls");
            break;
        case 2:
            cout << "\n******ANTECESOR DE UN NUMERO NATURAL******\n";
            cout << "\nDAME NUMERO\n";
            cin >> numeroy2;
            cout << "EL ANTECESOR ES: "<<ante.operaciones(numeroy2)<<"\n\n";
            system ("pause");
            system ("cls");
            break;
        case 3:
            cout << "\n******SUMA DE DOS NUMEROS NATURALES******\n";
            cout << "\nDAME NUMERO 1\n";
            cin >> numero1;
            cout << "\nDAME NUMERO 2\n";
            cin >> numero2;
            cout << "LA SUMA ES: " << sum.operaciones(numero1,numero2) << "\n\n";
            system ("pause");
            system ("cls");
            break;
        case 4:
            cout << "\n******DIFERENCIA DE DOS NUMEROS NATURALES******\n";
            cout << "\nDAME NUMERO 1\n";
            cin >> numero1;
            cout << "\nDAME NUMERO 2\n";
            cin >> numero2;
            cout << "LA DIFERENCIA ES: " << dif.operaciones(numero1, numero2) << "\n\n";
            system ("pause");
            system ("cls");
            break;
         case 5:
            cout << "\n*************NUMERO MENOR***********\n";
            cout << "\nDAME NUMERO 1\n";
            cin >> numeroa;
            cout << "\nDAME NUMERO 2\n";
            cin >> numerob;
            cout << "EL MENOR ES: " << men.operaciones(numeroa,numerob) << "\n\n";
            system ("pause");
            system ("cls");
            break;
        case 6:
            cout << "\n*************NUMERO IGUAL*************\n";
            cout << "\nDAME NUMERO 1\n";
            cin >> a;
            cout << "\nDAME NUMERO 2\n";
            cin >> b;
            ig.operaciones(a,b);
            system ("pause");
            system ("cls");
            break;
        case 7:
            cout <<"\nFIN DEL PROGRAMA\n";
            break;
        default :
            cout << "\nOPCION NO VALIDA\n";
            cout << "\nINTENTE DE NUEVO\n\n";
            system ("pause");
            system ("cls");
            break;
        }
    }while (opcion < 7 || opcion > 7);
    return 0;
}



