#include "Menu.h"
#include "time.h"

#include "Ej1.h"
#include "Ej2.h"
#include "Ej3.h"
#include "Ej4.h"
#include "Ej5.h"
#include "Ej6.h"
#include "Ej7.h"
#include "Ej8.h"


void ejecutarMenu(){
    int op;
    char rta;
    printf("/////Bienvenido al TRABAJO PRACTICO N2///// \n");
    do{
    system("cls");
    printf("--Seleccione un Ejercicio(Del 1 al 8)--\n");
    fflush(stdin);
    scanf("%d",&op);
    ejecutarEjercicios(op);
    printf("\n===============================================\n");
    rta = validacion();
    }while(rta == 's');

    printf("Gracias por ejecutar");
}

void ejecutarEjercicios(int op){
    char rta;
    printf("Desea ver la consigna del ejercicio seleccionado?\n");
    fflush(stdin);
    scanf("%c",&rta);
    if(rta == 's'){mostrarEjercicio(op);}
    printf("RESOLUCION: \n");
    switch(op){
        case 1:
            ejecutarEj1();
            break;
        case 2:
            ejecutarEj2();
            break;
        case 3:
            ejecutarEj3();
            break;
        case 4:
            ejecutarEj4();
            break;
        case 5:
            ejecutarEj5();
            break;
        case 6:
            ejecutarEj6();
            break;
        case 7:
            ejecutarEj7();
            break;
        case 8:
           ejecutarEj8();
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}

void mostrarEjercicio(int op){
    switch(op){
        case 1:
            printf("1.Dada la estructura PERSONA,\n a. Crear un arreglo est�tico de 30 elementos de esta estructura y cargarlo mediante una funci�n.\n b. Hacer una funci�n que cuente la cantidad de un g�nero determinado.\n c. Hacer una funci�n que copie los datos de todos los registros de un g�nero determinado del arreglo anterior en otro arreglo del tama�o justo. Usar malloc dentro de la funci�n y retornarlo o usar dos par�metros de tipo arreglo y crear el arreglo din�mico antes de la invocaci�n. ");
            break;
        case 2:
            printf("2.Dada la estructura PERSONA,\n Codificar el algoritmo de ordenamiento por selecci�n, sobre la estructura anterior teniendo en cuenta la edad como criterio de ordenaci�n.");
            break;
        case 3:
            printf("3.Segun la estructura PILA,\n Implementar las siguientes funciones:\n void apilar(Pila * p, int valor);\n int desapilar(Pila * p);\n int tope(Pila * p);\n int pilavacia(Pila * p);\n void mostrar(Pila * p);\n void leer (Pila * p);\n void inicPila(Pila * p);");
            break;
        case 4:
            printf("4.Segun la estructura PILA,\n Dadas dos pilas (como las anteriores) que se supone que tienen sus datos ordenados, generar una tercer pila que contenga los datos de las dos anteriores intercalados, de forma tal que queden ordenados.");
            break;
        case 5:
            printf("5.Funci�n insertar en orden en un arreglo");
            break;
        case 6:
            printf("6.Algoritmo de ordenamiento por inserci�n.");
            break;
        case 7:
            printf("7.Funci�n eliminar un elemento de un arreglo. (ver por desplazamiento si es ordenado)");
            break;
        case 8:
            printf("8.Segun las estructuras ALUMNO,NOTAS y MATERIA:\nSe deben hacer las siguientes funciones:\n1. Cargar el arreglo de Materia\n2. Agregar un Alumno\n3. Agregar una Nota, validando que exista matricula y codigo. La funcion debe retornar 1 si la operaci�n fue exitosa y 0 (cero) en caso contrario.\n4. Hacer una funci�n que muestre por pantalla el nombre del alumno y la lista de materias con sus respectivas notas. La funci�n debe recibir como par�metro el nombre del alumno. Estrategia: con el nombre del alumno se busca su matr�cula en el arreglo alus, luego se recorre el arreglo notas filtrandolo por matr�cula, y con el c�digo se accede al nombre de la materia revisando el arreglo mats.");
            break;
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}
