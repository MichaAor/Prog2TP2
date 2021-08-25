#include "Menu.h"

Pila passPilasOrd(Pila*a,Pila*b){
    Pila comb; inicPila(&comb);
    while(!pilaVacia(a) || !pilaVacia(b)){
                apilar(&comb,desapilar(a));
                apilar(&comb,desapilar(b));
    }
    return comb;
}

void ejecutarEj4(){
    Pila pil; inicPila(&pil);;
    apilar(&pil,95);     apilar(&pil,12);     apilar(&pil,7);    apilar(&pil,5);
    printf("\nPrimera pila");
    mostrarPila(&pil);
    Pila pil2; inicPila(&pil2);
    apilar(&pil2,89);     apilar(&pil2,62);     apilar(&pil2,18);    apilar(&pil2,3);
    printf("\nSegunda pila");
    mostrarPila(&pil2);
    printf("\nTercera pila combinando ambos en orden");
    Pila res = passPilasOrd(&pil,&pil2);
    mostrarPila(&res);
}


