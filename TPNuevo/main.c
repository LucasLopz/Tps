#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include "pilaAlumno.h"

int main()
{
    pilaAlumno pila;
    inicPilaAlumnos(&pila);


}



void MostrarDesdeArreglo(char NombreArchi,stAlumno Arreglo[])
{
    FILE* Archi = fopen(NombreArchi,"rb");
    if(Archi)
    {
        int i=0;
        int validos=0;
        while(fread(&Arreglo[i],sizeof(stAlumno),1,Archi)>0)
        {
            i++;

        }
        validos=i;
        for(i=0; i<validos; i++)
        {
            MuestraUnAlumno(Arreglo[i]);
        }
        fclose(Archi);
    }
}

void MostrarDesdeArchivo(char NombreArchi,stAlumno Alumno)
{
    FILE* Archi= fopen(NombreArchi, "rb");
    if(Archi)
    {
        while(fread(&Alumno,sizeof(stAlumno),1,Archi)>0)
        {
            MuestraUnAlumno(Alumno);
        }
        fclose(Archi);
    }
}

