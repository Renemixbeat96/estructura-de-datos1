#include "ahorcado.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

ahorcado::ahorcado()
{
    //ctor
}

string palabra_original;
string palabra_mostrar;
int vidas;

void ahorcado::inicio(){

    iniciar();
    mostrar();
    while(vidas>0 && palabra_mostrar!=palabra_original){
        char x;
        cin>>x;
        system("cls");
        ingresar(x);
        mostrar();
    }
    if(vidas>0){
        cout << "\nGANASTE !!! "<<endl;
    }else{
        cout << "\nPERDISTE, LA PALABRA ERA: "<< palabra_original <<endl;
    }
}

void ahorcado::mostrar(){

    cout << endl;
    cout << "NUMERO DE INTENTOS PARA ENCONTRAR LA PALABRA: "<< vidas << endl << endl;
    cout << palabra_mostrar << endl;
}

void ahorcado::ingresar(char x){
    bool perdervidas=true;

    for(int i=0; i<palabra_original.length(); i++){
        if(x==palabra_original[i]){
            perdervidas=false;
            palabra_mostrar[i]=x;
        }
    }

    if(perdervidas) vidas--;
}

void ahorcado::iniciar(){
        vidas = 5;
        palabra_original=palabra_aleatoria();

        for(int i=0; i<palabra_original.length() ; i++){
        if(palabra_original[i]>='A' && palabra_original[i]<='Z'){
            palabra_original[i]+=32;
        }
    }

    for (int j=0; j<palabra_original.length() ; j++){
        if(palabra_original[j]>='a' && palabra_original[j]<='z'){
            palabra_mostrar+='*';
        }else{
            palabra_mostrar+=palabra_original[j];
        }
    }
}

string ahorcado::palabra_aleatoria(){

    int data;

    vector<string>palabras;
    palabras.push_back("cochinita pibil");
    palabras.push_back("sistemas");
    palabras.push_back("charritos");
    palabras.push_back("no compila");
    palabras.push_back("orgullo itsva");

    srand(time(NULL));
    data = 0 + rand()%(5);

    return palabras[data];
}
