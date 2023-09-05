#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include <conio.h>


void inicArreglo(int **A, int Dim);
int CargarArreglo(int  **A, int Dim);
int SumaContArreglo(int *A, int Dim);
int ContArreglo(int *A, int Dim);
float PromedioArreglo(int *A, int Dim);


int main()
{
int *Arreglo = NULL;
Arreglo= (int*) malloc(sizeof(int)*20);

int valor = 5;
int * pNum = &valor;

int ** pDosNum = &pNum;

**pDosNum = 25;

printf("%d",valor);

int array[20];





}


///1. Se tiene un arreglo de n�meros enteros positivos. Se desea obtener el promedio de sus valores. Para ello se debe:
///a. Hacer una funci�n que inicialice las celdas del arreglo en �1.

void inicArreglo(int **A, int Dim){
int i=0;
(*A)= (int*) malloc(sizeof(int)*Dim);
for(i=0;i<Dim;i++){
    (*A)[i]= -1;
}
}


///b. Hacer una funci�n que permita al usuario ingresar los valores. No se conoce la cantidad de antemano.

int CargarArreglo(int **A, int Dim){
char opcion=0;
int validos=0;

do{
 system("cls");
 if(validos < Dim){
 printf("Ingrese un Numero Positivo Nuevo \n");
 scanf("%d", (*A)[validos]);
 validos++;
 }else{
     if(validos == Dim){
        (*A)= (int*) malloc(sizeof(int)* 50 );
        printf("Ingrese un Numero Positivo Nuevo \n");
 scanf("%d", (*A)[validos]);
 validos++;
     }}

 printf("Para continuar presione cualquier tecla sino aprete ESC \n");
 fflush("stdin");
opcion = getch();
}while(opcion!=27);
return validos;
}


///c. Hacer una funci�n que sume el contenido del arreglo y lo retorne.

int SumaContArreglo(int *A, int Dim){
int i=0;
int Suma=0;
while(A[i]>-1 && i<Dim){
    Suma= Suma + A[i];
    i++;
}
return Suma;
}

///d. Hacer una funci�n que cuente la cantidad de valores ingresados.

int ContArreglo(int *A, int Dim){
int i=0;
int cont=0;
while(A[i]>-1 && i<Dim){
    cont++;
    i++;
}
return cont;
}


///e. Hacer una funci�n que reciba como par�metro el arreglo ya cargado, calcule y retorne el valor promedio
///usando las funciones anteriores (c y d).

float PromedioArreglo(int *A, int Dim){
float Prom= SumaContArreglo(*A, Dim) / ContArreglo(*A, Dim);
return Prom;
}

///f. Hacer la funci�n main correspondiente.
void SacarPromArreglo(int *A, int Dim){

inicArreglo(*A, Dim);
CargarArreglo(*A,Dim);
PromedioArreglo(*A,Dim);


}
///-------------------------------------------------------------------------------------------------------------

///2. Invertir el contenido de un arreglo de caracteres. Para ello se debe modularizar de la siguiente forma:
///a. Hacer una funci�n para la carga del arreglo.

void CargaArregloChar(char **A, int Dim){
char opcion=0;
int validos=0;

do{
 system("cls");
 if(validos < Dim){
 printf("Ingrese un Caracter Nuevo \n");
 fflush("stdin");
(*A)[validos]= gets();
 validos++;
 }else{
     if(validos == Dim){
        (*A)= (char*) malloc(sizeof(char)* 50 );
        printf("Ingrese un Caracter Nuevo \n");
 fflush("stdin");
(*A)[validos]= gets();
 validos++;
     }}

 printf("Para continuar presione cualquier tecla sino aprete ESC \n");
 fflush("stdin");
opcion = getch();
}while(opcion!=27);
return validos;
}

///b. Hacer una funci�n para invertir el arreglo.

void InvArregloChar (char **A,int validos, int Dim){
int i=0;
for(i=0;i<validos;i++)
{
    *a[i] = *a[validos];
    validos --;
}
}

///--------------------------------------------------------------------------------------------------------
///3. Hacer una funci�n que reciba como par�metro un arreglo de n�meros enteros de un d�gito y retorne el valor decimal de dicho n�mero.
///Por ejemplo, un arreglo que tiene cargados los valores 3, 2, 8 y 9, la fn retorna el valor 3289.

int ArrayToDec(int *A){
int i=0;
int e=0;
int Num=0;
while(*A[i] < 10){
 i++;
}
while(e<i){
 if(e!=0){
 Num= Num *10;
}else{
Num = Num + *A[e];
}
}
}
///---------------------------------------------------------------------------------------------------------------
///4. Hacer una funci�n que retorne la posici�n del valor m�ximo de un arreglo de n�meros enteros.

int NumMaxArray(int *A, int Dim){
int i=0;
int NumMAX;
int NumMAX= *A[i];
for(i=0;i<Dim;i++){
    if(*A[i]> NumMAX;){
        NumMAX= *A[i];
    }
}
return NumMAX;
}

///---------------------------------------------------------------------------------------------------------------
///6. Dada una cadena de caracteres, hacer una funci�n que determine si dicha cadena es pal�ndromo (se lee de igual forma de adelante para atr�s como viceversa) o no.
/// La funci�n recibe como par�metro la cadena y retorna 1 o 0 seg�n sea la respuesta.
int ArrayCharPali(char *A,int validos){
int i=0;
int flag=1;
int i2=0;
char AA[validos]
for(i=0;i<validos;i++){
    AA[i] = *A[i];
}
int i2=0;
while(flag==1 && i2< validos){
 if(*A[i2]!= AA[i]){
    flag=0;
 }
 i--;
 i2++;
}
return flag;
}
///------------------------------------------------------------------------------------------------------------------
///7. Hacer una funci�n que intercambie el contenido de dos variables. (pasaje de par�metros por referencia)
void PasajeVariable (int *A, int *B){
int AUX;
AUX = *A;
*A= *B;
*B = AUX;
}

///-------------------------------------------------------------------------------------------------------------------
/// Dados dos arreglos de n�meros enteros ordenados de menor a mayor, hacer una funci�n que los reciba como par�metros y retorne un tercer arreglo que contenga los datos de los arreglos anteriores
///, tambi�n ordenados. Se los debe intercalar

int* Ordenamiento2Array (int *A, int *B,int validos1, int validos2){
int v= validos + validos2;
int i=0;
int i2=0;
int i3=0;
int *C= NULL;
(*C) = (*int) malloc(sizeof(int)*v);
while(i3<v){
 if(*A[i]<*B[i2]){
    *C[i3] = *A[i];
    i++;
    i3++;
 }else{
 *C[i3]= *B[i2];
 i2++;
 i3++;
 }
}
return *C;
}

///--------------------------------------------------------------------------------------------------------------------------------
///Dados dos arreglos paralelos, uno con apellidos y otro con edades.
///Se debe hacer un programa para encontrar el apellido de la persona de mayor edad. Se debe modularizar.

char* EdadMayor (char *A,int *E, int validos){
    int i=0;
    int iEM=0;
int EM= *E[i];
for(i=0;i<validos;i++){
    if(*E[i]> EM){
        EM= *E[i];
        iEM=i;
    }
}
return *A[iEM];
}
///---------------------------------------------------------------------------------------------------------------------------------------
///Hacer una funci�n que reciba como par�metros de entrada un arreglo de enteros y su dimensi�n,
/// y tres par�metros de salida, tres n�meros enteros que representen: valor m�ximo, valor m�nimo y promedio.
///Se debe usar pasaje de par�metros por referencia.

void ValoresArreglo(int *A, int Dim,int **VM,int **VMin, int **Prom){
int i=0;
suma=0;
*VM= *A[i];
*VMin= *A[i];
for(i=0;i<Dim;i++){
 if(*A[i]> *VM){
    *VM= *A[i];
 }
 if(*A[i]< *VMin){
    *VMin= *A[i];
 }
    suma= suma + *A[i];
}
*Prom = Suma / Dim;
}
///--------------------------------------------------------------------------------------------------------------------------------------------




