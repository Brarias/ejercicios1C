/*
 ============================================================================
 Name        : ejercicio1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

		int numeroUno;
		int numeroDos;
		int numeroTres;


		printf("Ingrese el primer numero: ");
		scanf("%d", &numeroUno);

		printf("Ingrese el segundo numero: ");
		scanf("%d", &numeroDos);

		printf("Ingrese el tercer numero: ");
		scanf("%d", &numeroTres);

		if(numeroUno > numeroDos && numeroUno < numeroTres || numeroUno < numeroDos && numeroUno > numeroTres)
		{
			printf("El numero del medio es: %d", numeroUno);
		}
		else if(numeroDos > numeroUno && numeroDos < numeroTres || numeroDos < numeroUno && numeroDos > numeroTres)
		{
			printf("El numero del medio es: %d", numeroDos);
		}
		else if(numeroTres > numeroUno && numeroTres < numeroDos || numeroTres < numeroUno && numeroTres > numeroDos)
		{
			printf("El numero del medio es: %d", numeroTres);
		}
		else{
			printf("No hay numero del medio");
		}







	return EXIT_SUCCESS;
}
