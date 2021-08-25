#include "Menu.h"
#include "Ej1.h"

Persona* ordSelXEdad(Persona*a,int val){
  int minimo=0;
  Persona aux;;
  for(int i=0 ; i<val-1 ; i++){
     minimo=i;
     for(int j=i+1 ; j<val ; j++){
        if (a[minimo].edad > a[j].edad){
           minimo=j;
           aux=a[minimo];
           a[minimo]=a[i];
           a[i]=aux;
            }
        }
    }
    return a;
}

void ejecutarEj2(){
    int dim = 30;
    Persona arr[dim];
    int val = cargaPersManual(arr,dim);
    mostrarPersonas(arr,val);
    Persona* a = arrToArrDin(arr,val);
    a = ordSelXEdad(a,val);
    printf("Luego de la ordenancion");
    mostrarPersonas(a,val);

}

