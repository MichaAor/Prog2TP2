#include "Menu.h"

void ejecutarEj7(){
    int* a = (int*)malloc(sizeof(int)*100);
    int val = cargaAutoArr(a),dato;
    mostrarArreglo(a,val);
    ordenaPorIns(a,val);
    printf("\nMostrando nuevo arreglo\n");
    mostrarArreglo(a,val);
    printf("\nIngrese el numero que desea eliminar:\n");
    fflush(stdin);
    scanf("%d",&dato);
    val = quitarElementoArr(a,val,dato);
    mostrarArreglo(a,val);
}

int quitarElementoArr(int*a,int val,int sel){
    int i=0;
    while(i<val){
        if(a[i] == sel){
            val = val-1;
            while(i<val){
                a[i] = a[i+1];
                i++;
            }
            break;
        }
        i++;
    }
    return val;
}

