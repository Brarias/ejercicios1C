/*
 ============================================================================
 Name        : ejercicio1-2.c
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


	if(numeroUno > numeroDos && numeroUno > numeroTres){
		printf("El primer numero es el mayor: %d", numeroUno);
	}else if(numeroDos > numeroUno && numeroDos > numeroTres){
		printf("El segundo es el mayor: %d", numeroDos);
	}else{
		printf("El tercero es el mayor: %d", numeroTres);
	}



	return EXIT_SUCCESS;
}
