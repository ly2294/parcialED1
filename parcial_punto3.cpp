/*
programa:ingresar mediante teclado dos nombres de personas y luego mostrar primero el que tiene mas caracteres y luego el que tiene menos
fecha:11 de septiembre del 2018
elaborado: leidy yuliana quintero Jaramillo
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char nombre[30];
	printf("Ingrese primer nombre:");
	gets(nombre);
	int cant=strlen(nombre);
	printf("el nombre %s tiene %i+1 letras",nombre,cant);
	printf("Ingrese segundo nombre:");
	gets(nombre);
	int cant=strlen(nombre);
	printf("el nombre %s tiene %i letras",nombre,cant);
	
	return 0;
}

