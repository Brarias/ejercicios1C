/*
 ============================================================================
Ejercicio 3-1:
Crear una función que muestre por pantalla el número flotante que recibe como parámetro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumeroFlotante(float numero);

int main(void) {
	setbuf(stdout, NULL);

	float sueldo = 30000.45;

	mostrarNumeroFlotante(sueldo);





	return EXIT_SUCCESS;
}
void mostrarNumeroFlotante(float numero){
	printf("El numero es: %.2f", numero);
}
