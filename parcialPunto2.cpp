/*
programa:Solicitar e ingreso de 15 numeros de tipo entero,luego muestre en pantalla cuentos numeros pares e impares se han introducido
fecha:11 de septiembre del 2018
elaborado: leidy yuliana quintero Jaramillo
*/


#include <stdio.h> 
int main()
{
	int indice, cantidad;
	int pares, impares;
	int numero[15];
	
	printf("ingresar la cantidad de numeros");
	scanf("%d",&cantidad);
	
	for(indice=0; indice < cantidad; indice++);
		scanf("%d",&numero[indice];
		
		for(numero=0; numero < 15;numero++)
		{
			if(numero[indice]/2==0 )
				pares=pares+1
			else
				impares=impares+1
		}
		printf("Hay %d pares y %d impares en esta lista de números.",pares,impares);
}
