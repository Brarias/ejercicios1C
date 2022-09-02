/*
 ============================================================================
 Name        : ejercicio1-1.c
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
	int resultado;

	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;
	printf("la suma es: %d", resultado);

	return EXIT_SUCCESS;
}
