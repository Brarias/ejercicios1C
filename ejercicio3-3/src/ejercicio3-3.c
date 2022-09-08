/*
 ============================================================================
Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirEntero();

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	numero = pedirEntero();

	printf("%d", numero);


	return EXIT_SUCCESS;
}

int pedirEntero(){
	int entero;

	printf("Ingrese un numero entero: ");
	scanf("%d", &entero);

	return entero;
}
