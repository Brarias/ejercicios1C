/*
 ============================================================================
Ingresar 10 números enteros, distintos de cero. Mostrar:
Cantidad de pares e impares.
El menor número ingresado.
De los pares el mayor número ingresado.
Suma de los positivos.
Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int contadorPares = 0;
	int contadorImpares = 0;
	int minimo;
	int numeroMayorPar;
	int flagMayorPar = 0;
	int flag = 0;
	int sumaPositivos = 0;
	int productoNegativos = 1;

	for(int i = 0; i < 10; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);

		if(numeroIngresado !=0){
			if(numeroIngresado % 2 == 0){
				contadorPares++;
				if(flagMayorPar == 0){
					numeroMayorPar = numeroIngresado;
					flagMayorPar = 1;
				}else{
					if(numeroIngresado > numeroMayorPar){
						numeroMayorPar = numeroIngresado;
					}
				}
			}else{
				contadorImpares++;
			}
			if(flag == 0){
				minimo = numeroIngresado;
				flag = 1;
			}else{
				if(numeroIngresado < minimo){
					minimo = numeroIngresado;
				}
			}if(numeroIngresado < 0){
				productoNegativos= productoNegativos * numeroIngresado;
			}else{
				sumaPositivos = sumaPositivos + numeroIngresado;
			}
		}
	}

	printf("La cantidad de numeros pares es: %d\n", contadorPares);
	printf("La cantidad de numeros impares es: %d\n", contadorImpares);
	printf("El menor numero ingresado es: %d\n", minimo);
	printf("El mayor de los pares es: %d\n", numeroMayorPar);
	printf("La suma de los positivos es: %d\n", sumaPositivos);
	printf("El producto de los negativos es: %d\n", productoNegativos);







	return EXIT_SUCCESS;
}
