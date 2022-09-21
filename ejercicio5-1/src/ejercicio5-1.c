/*
 ============================================================================
Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
Además, mostrar el promedio.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void mostrarNumeros(int vector[], int size);

int main(void) {
	setbuf(stdout, NULL);
	int numeros[TAM];
	int sumatoria;
    float promedio;

    sumatoria = 0;
	for(int i = 0; i < TAM; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
		sumatoria += numeros[i];
	}

	mostrarNumeros(numeros, TAM);
	promedio = (float)sumatoria / TAM;
	printf("%.2f", promedio);


	return EXIT_SUCCESS;
}

void mostrarNumeros(int vector[], int size)
{
	for(int i = 0; i < size; i++){
		printf("%d\n", vector[i]);
		}
}
