/*
 ============================================================================
Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números.
Probar la aplicación con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 - 1 - 2

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int aux = 0;
	float promedio;

	for(int i = 0; i < 5; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);

		aux = aux + numeroIngresado;


	}

	promedio = (float)aux / 5;
	printf("El promedio es: %.2f", promedio);

	return EXIT_SUCCESS;
}
