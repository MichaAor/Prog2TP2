#include "Menu.h"
#include "Ej1.h"

void ejecutarEj1(){
    int dim = 30;
    Persona arr[dim];
    int val = cargaPersManual(arr,dim);
    mostrarPersonas(arr,val);
    int cant = contarCantSegunGen(arr,val);
    printf("La cantidad de personas con el genero elegido es de: %d",cant);
    Persona*ard=arrToArrDin(arr,val);
    printf("\nArreglo dinamico: \n");
    mostrarPersonas(ard,val);
}

int cargaPersManual(Persona a[],int dim){
    char rta = 's';
    int val = 0;
    for(val;val<dim;val++){
        if(rta == 's'){
        printf("\nIngrese el NOMBRE para la persona en la posicion %d \n",val);
        fflush(stdin);
        scanf("%s",a[val].nombre);
        printf("\nIngrese el GENERO para la persona en la posicion %d \n",val);
        fflush(stdin);
        scanf("%c",&a[val].genero);
        printf("\nIngrese la EDAD para la persona en la posicion %d \n",val);
        fflush(stdin);
        scanf("%d",&a[val].edad);
        }else{
            return val;
        }
        rta = validacion();
    }
    return val;
}

char validacion(){
    char rta;
    printf("Desea seguir? s/n   \n");
    fflush(stdin);
    scanf("%c",&rta);
return rta;
}

void mostrarPersonas(Persona a[],int val){
    for(int i=0; i<val;i++){
        printf("{\n\tPersona:\n\t\tNombre: %s\n\t\tGenero: %c\n\t\tEdad: %d\n}",a[i].nombre,a[i].genero,a[i].edad);
    }
}

int contarCantSegunGen(Persona a[],int val){
    char rta;int cont;
    printf("\nIngrese el genero de las personas que desea contar(en minuscula): \n");
    fflush(stdin);
    scanf("%c",&rta);
    for(int i=0;i<val;i++){
        if(rta == a[i].genero){
            cont++;
        }
    }
return cont;
}

Persona* arrToArrDin(Persona a[],int val){
    Persona *arr = (Persona*)malloc(sizeof(Persona)*val);
    for(int i = 0;i<val;i++){
        arr[i] = a[i];
    }
  return arr;
}
