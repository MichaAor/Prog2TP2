#include "Menu.h"
#include "Ej8.h"


void ejecutarEj8(){
    int valA=0,valN=0;
    Alumno* alus = (Alumno*)malloc(sizeof(Alumno)*20);
    Materia* mats = (Materia*)malloc(sizeof(Materia)*5);
    Nota* notas = (Nota*)malloc(sizeof(Nota)*100);

    cargarMaterias(mats);
    valA = cargarUnAlumno(alus,valA);


}

void cargarMaterias(Materia*mats){
    for(int i=0;i<5;i++){
        printf("\nIngrese el nombre de la materia: ");
        fflush(stdin);
        scanf("%s",mats[i].nombreMat);
        printf("\nIngrese el codigo de la materia ""%s"": ",mats[i].nombreMat);
        fflush(stdin);
        scanf("%d",mats[i].codigo);
    }
}

int cargarUnAlumno(Alumno*alus,int val){
    Alumno niu;
        printf("\nIngrese el nombre del alumno: ");
        fflush(stdin);
        scanf("%s",niu.nombre);
        printf("\nIngrese la matricula del alumno ""%s"": ",niu.nombre);
        fflush(stdin);
        scanf("%d",niu.matricula);
    alus[val+1] = niu;
    val = val+1;
return val;
}

int agregarNota(Nota*notas,int valN,Alumno*alus,int valA,Materia*mats,int valM){
    Nota nota;
    int rta1=0,rta2=0,rta3=0,matR,codR,notaR;

    do{
    printf("\nIngrese la matricula del alumno: ");
    fflush(stdin);
    scanf("%d",&matR);
    rta1=validacionMatricula(alus,matR,valA);
    }while(rta1 == 0);

    do{
    printf("\nIngrese el codigo de la materia: ");
    fflush(stdin);
    scanf("%d",&codR);
    rta2 = validacionCodigo(mats,codR,valM);
    }while(rta2 == 0);

    notas[valN+1].matricula = matR;
    notas[valN+1].codigo = codR;

    do{
    printf("\nIngrese la nota: ");
    fflush(stdin);
    scanf("%d",&notaR);
    rta3 = validacionCodigo(notaR);
    }while(rta3 == 0);

    notas[valN+1].nota;
}
int validacionMatricula(Alumno*alus,int mat,int valA){
    for(int i=0;i<valA;i++){
      if(alus[i].matricula == mat){
        printf("\nLa matricula ingresada es correcta");
        return 1;
      }
    }
    printf("\nLa matricula ingresada es incorrecta,por favor reingresar");
    return 0;
}

int validacionCodigo(Materia*mats,int cod,int valM){
    for(int i=0;i<valM;i++){
      if(mats[i].codigo == cod){
        printf("\nEl codigo ingresado es correcto");
        return 1;
      }
    }
    printf("\nEl codigo ingresado es incorrecto,por favor reingresar");
    return 0;
}

int validacionNota(int nota){
    if(nota >0 && nota<=10){
        printf("\nSe ha ingresado correctamente la nota");
        return 1;
    }else{
        printf("\nSe ha ingresado incorrectamente la nota");
        return 0;
    }
}

