/*
 ============================================================================
Ejercicio 4-2:
Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit ,
validando que las temperaturas ingresadas estén entre el punto de congelación y
ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit
se hacen en otra biblioteca.
Extra:

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validacionTemperatura.h"
#include "convertidor.h"


int main(void) {
	setbuf(stdout, NULL);
	float temperaturaCelsius;
	float temperaturaFahrenheit;

	printf("Ingrese una temperatura en celsius: ");
	scanf("%f", &temperaturaCelsius);

	temperaturaCelsius = convertidorCelsiusAFahrenheit(temperaturaCelsius);
	if(temperaturaCelsius == -1){
	printf("La temperatura ingresada está fuera del rango!\n");
	}
	else{
		printf("%.2f\n", temperaturaCelsius);
	}

	printf("Ingrese una temperatura en Fahrenheit: ");
		scanf("%f", &temperaturaFahrenheit);

		temperaturaFahrenheit = convertidorFahrenheitACelsius(temperaturaFahrenheit);
		if(temperaturaFahrenheit == -1){
		printf("La temperatura ingresada está fuera del rango!\n");
		}
		else{
			printf("%.2f", temperaturaFahrenheit);
		}




	return EXIT_SUCCESS;
}


