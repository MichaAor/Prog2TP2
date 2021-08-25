#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejecutarMenu();
void ejecutarEjercicios(int op);
void mostrarEjercicio(int op);
/////////////ESTRUCTURAS
/////EJ1 Y 2

typedef struct {

char nombre[30];
char genero;
int edad;

} Persona;

/////EJ3 Y 4
typedef struct{

    int *valores;
    int posTope;

}Pila;




#endif // MENU_H_INCLUDED
