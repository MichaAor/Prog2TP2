#include "Menu.h"

void ejecutarEj6(){
    int* a = (int*)malloc(sizeof(int)*100);
    int val = cargaAutoArr(a),dato;
    mostrarArreglo(a,val);
    ordenaPorIns(a,val);
    printf("\nMostrando nuevo arreglo\n");
    mostrarArreglo(a,val);
}

void insertaParaOrdenar(int*a,int v, int dato){
    int i = v;
    while(i>=0 && a[i]>dato){
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=dato;
}

void ordenaPorIns(int*a, int v){
    int i = 0;
    while(i<v-1){
        insertaParaOrdenar(a, i, a[i+1]);
        i++;
    }
}
