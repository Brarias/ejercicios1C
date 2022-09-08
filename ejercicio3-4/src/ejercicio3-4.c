/*
 ============================================================================
Ejercicio 3-4:
Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirEnteroRango(int minimo, int maximo);

int main(void) {
	setbuf(stdout, NULL);

	int num;

	num = pedirEnteroRango(-100, 100);

	printf("%d", num);

	return EXIT_SUCCESS;
}

int pedirEnteroRango(int minimo, int maximo){
	int numero;

	printf("Ingrese un numero entero entre el minimo y el maximo: ");
	scanf("%d", &numero);

	while(!(numero > minimo && numero < maximo)){
		printf("Error!!!Ingrese un numero entero entre el minimo y el maximo: ");
		scanf("%d", &numero);
	}

	return numero;
}
