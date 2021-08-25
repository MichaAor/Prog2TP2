#include "Menu.h"
#include "Ej3.h"

void inicPila(Pila* p){
       p->valores = (int *)malloc(sizeof(int)*100);
       p->posTope = 0;
}

void apilar(Pila *p, int dato){
    p->valores[p->posTope] = dato;
    p->posTope++;
}

int desapilar(Pila *p){
   int z = p->valores[p->posTope -1];
   p->posTope--;
   return z;
}

int tope(Pila *p){
    return p->valores[p->posTope - 1];
}

int pilaVacia(Pila *p){
    return (p->posTope == 0) ? 1 : 0;
}


void leer (Pila *p){
    int aux = 0;
    if (p->posTope < 50){
        printf("Ingrese un valor entero: ");
        fflush(stdin);
        scanf("%d", &aux);
        apilar(p, aux);
    }else
        printf("Error: la pila esta llena");
}

void mostrarPila(Pila *p){
    printf("\nBase .............................................. Tope\n\n");
    for(int i=0; i < p->posTope; i++)
        printf("| %d ", p->valores[i]);
    printf("\n\nBase .............................................. Tope\n\n");
}

/////////////////////////////////////////////////////////
void ejecutarEj3(){
    Pila pil; inicPila(&pil);;
    apilar(&pil,5);
    apilar(&pil,9);
    apilar(&pil,12);
    apilar(&pil,95);
    printf("llegue");
    mostrarPila(&pil);

}
///////////////////////////////////////////////////////////
