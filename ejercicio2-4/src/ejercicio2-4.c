/*
 ============================================================================
Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char caracterIngresado;
	int contadorP = 0;

	for(int i = 0; i < 5; i++){
		printf("Ingrese un caracter: ");
		fflush(stdin);
		scanf("%c", &caracterIngresado);

		if(caracterIngresado == 'p'){
			contadorP++;
		}
	}

	printf("La cantidad de p ingresadasa es: %d", contadorP);


	return EXIT_SUCCESS;
}
