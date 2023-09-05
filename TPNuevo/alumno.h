#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct{
    int id;
char nombre[20];
char apellido [20];
char dni[13];
int notas[50];
}stAlumno;

stAlumno CargaUnAlumno();
void MuestraUnAlumno(stAlumno A);

#endif // ALUMNO_H_INCLUDED
