/*
 ============================================================================
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
Utilizar la función PedirNumero de la ejercitación 3-4.
Por ejemplo:
5! = 5*4*3*2*1 = 120

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirEnteroRango(int minimo, int maximo);
int factorial(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int num;
	int resultado;

	num = pedirEnteroRango(0, 10);
	resultado = factorial(num);

	printf("%d", resultado);


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

int factorial(int numero){
	int multiplicacion = 1;

	for(int i = 1; i <= numero; i++){
		multiplicacion = multiplicacion * i;
	}

	return multiplicacion;
}
