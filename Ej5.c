#include "Menu.h"

void ejecutarEj5(){
    int* a = (int*)malloc(sizeof(int)*100);
    //int val = cargaAutoArr(a),dato;
    int val = 5,dato;
    a[0] = 9;
    a[1] = 28;
    a[2] = 36;
    a[3] = 75;
    a[4] = 99;
    mostrarArreglo(a,val);
    printf("\nIngrese el dato a insertar en el arreglo: ");
    fflush(stdin);
    scanf("%d",&dato);
    val = insOrd(a,val,dato);
    printf("\nMostrando nuevo arreglo\n");
    mostrarArreglo(a,val);
}

int cargaAutoArr(int*a){
    int cant,i=0;
    srand(time(NULL));
    printf("Ingrese la cant de elementos a cargar: \n");
    fflush(stdin);
    scanf("%d",&cant);
    for(i=0;i<cant;i++){
        a[i] = rand()%100;
    }
return i;
}

void mostrarArreglo(int*a,int val){
    for(int i=0; i<val;i++){
            printf("-[%d]-",a[i]);
    }
}

int insOrd(int*a,int val,int n){
    int i=val-1;
    while(val>=0 && a[i]>n){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=n;
        val = val+1;
return val;
}


