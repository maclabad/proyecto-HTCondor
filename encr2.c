#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX   1000000
//prototipo de funciones.
void encriptar(char frase[MAX],int numero);
void desencriptar(char frase[MAX],int numero);

//Función para desencriptar Cifrado Cesar en C
void desencriptar(char frase[MAX],int numero)
{
    int i=0;
    while(frase[i]!='\0')
    {
        frase[i]=frase[i]-numero;
        i++;
    }
    printf("\nLa frase desencriptada es:\n%s\n",frase);
}
//Función para encriptar Cifrado Cesar en C
void encriptar(char frase[MAX],int numero)
{
    int i=0;
    char letra;
    while(frase[i]!='\0')
    {
        frase[i]=frase[i]+numero;
        i++;
    }
    printf("\nLa frase encriptado es:\n%s\n",frase);
}

//Procedimiento principal.
int main()
{
    //Variables necesarias
    int x=4;
    char cadena[MAX];
    FILE *fichero;
    char lec[MAX];
    char* archivo="cuento3.txt";

//Presentación
    printf("Encriptacion/Desencriptacion:\n");
    printf("        METODO CESAR:\n");
    printf("-----------------------------\n");
    fichero=fopen(archivo,"r");
    if (fichero==NULL)
{
  printf( "No se pueden abrir los archivos archivos.\n" );
  exit( 1 );}
else{

fscanf(fichero, "%[^\n]", lec);
strcpy(cadena,lec);
}

//Vacía el buffer del teclado
    while(getchar()!='\n');
    //Llamamos a la función encriptar
    encriptar(cadena, x);
    getchar();
    //Llamamos a la función desencriptar
    desencriptar(cadena, x);
    getchar();
    //Salimos
 return 0;
}
