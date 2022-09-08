/*
 ============================================================================
Ejercicio 3-2:
Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y
 0 en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int esPar(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int num;
	int par;

	printf("Ingrese un numero: ");
	scanf("%d", &num);

	par = esPar(num);
	if(par == 1){
		printf("Es par");
	}else{
		printf("Es impar");
	}

	return EXIT_SUCCESS;
}

int esPar(int numero){
	int paridad;
	paridad = 0;

	if(numero %2 == 0){
		paridad = 1;
	}

	return paridad;
}
