/*
programa:calcular el desempeño de las pruebas de sufuciencia a empleados
fecha:11 de septiembre del 2018
elaborado: leidy yuliana quintero Jaramillo
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int calculo(float porcentaje, float area)// función calculo
{
	float resultado;
	float resultadoFinal;
	resultado = (area/porcentaje);
	resultadoFinal= resultado *100;
	if (resultadoFinal >= 85){
		printf( "\n Nivel máximo %f\n",resultadoFinal);
		
	}else 
		if(resultadoFinal >= 70 and resultadoFinal < 85){
		printf( "\n Nivel medio %f\n",resultadoFinal);
	}else 
		   if( resultadoFinal >= 40 and resultadoFinal < 70){
			printf( "\n Nivel bajo %f\n",resultadoFinal);
		}else
			  if( resultadoFinal <= 40 ){
			   printf( "\n Fuera de nivel %f\n",resultadoFinal); 
		   }
			  
}
int main() {
	float preguntas;
	float acertadas;
	char respuesta; 
	do{
		printf ("Ingrese las  numero preguntas realizadas \n");
		scanf ("%f", &preguntas);
		printf ("Ingrese las preguntas acertadas \n");
		scanf ("%f", &acertadas);
		calculo (preguntas,acertadas);
		printf ("\n ¿Desea continuar S/N \n");
		scanf ("%s",&respuesta);
		
	} while(respuesta == 'S' || respuesta =='s');
	
	
	
	return 0;
}

