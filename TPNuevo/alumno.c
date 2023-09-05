#include "alumno.h"


stAlumno CargaUnAlumno(){
    stAlumno A;
printf("\n Nombre......: ");
fflush("stdin");
gets(A.nombre);
printf("\n Apellido....: ");
fflush("stdin");
gets(A.apellido);
printf("\n DNI.........: ");
fflush("stdin");
gets(A.dni);
printf("\n Nota........:");
scanf("%d",&A.notas);

return A;
}

void MuestraUnAlumno(stAlumno A){

printf("\n Nombre.........: %s",A.nombre);
printf("\n apellido.......: %s",A.apellido);
printf("\n DNI............: %s",A.dni);
printf("\n Notas..........: %d",A.notas);

}
