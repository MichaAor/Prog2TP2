#ifndef EJ8_H_INCLUDED
#define EJ8_H_INCLUDED

typedef struct {
int matricula;
char nombre[30];
} Alumno;

typedef struct {
int codigo;
char nombreMat[20];
} Materia ;

typedef struct {
int matricula;
int codigo;
int nota;
} Nota;

#endif // EJ8_H_INCLUDED
