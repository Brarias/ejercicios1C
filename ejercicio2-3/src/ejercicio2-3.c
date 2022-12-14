/*
 ============================================================================
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de
personas (no más de 100), de cada persona debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	char estadoCivil;
	char genero;
	int edad;
	int temperatura;
	int numeroCliente;
	int numeroClienteMujerSoltera;
	int contadorMayorViudo = 0;
	int edadMujerSoltera;
	int flagEdadSoltera = 0;
	int valorPasaje = 600;
	int valorTotal = 0;
	float valorDescuento;

	for(int i = 0; i < 5; i++){
		printf("Ingrese numero de cliente: ");
		scanf("%d", &numeroCliente);

		printf("Ingrese su estado civil: s para soltero, c para casado o v viudo: ");
		fflush(stdin);
		scanf("%c", &estadoCivil);

		printf("Ingrese el genero: ");
		fflush(stdin);
		scanf("%c", &genero);

		printf("Ingrese la edad: ");
		scanf("%d", &edad);

		printf("Ingrese la temperatura: ");
		scanf("%d", &temperatura);

		if(edad > 17){
			if(edad > 60 && estadoCivil == 'v'){
				contadorMayorViudo++;
			}
			if(genero == 'f' && estadoCivil == 's'){
				if(flagEdadSoltera == 0){
					edadMujerSoltera = edad;
					flagEdadSoltera = 1;
				}if(edad < edadMujerSoltera){
					edadMujerSoltera = edad;
					numeroClienteMujerSoltera = numeroCliente;
				}
			}
		}

		valorTotal = valorPasaje + valorTotal;
	}

	printf("La cantidad de viudos es: %d\n", contadorMayorViudo);
	printf("El numero de cliente de la mujer soltera mas joven es: %d y su edad es: %d\n", numeroClienteMujerSoltera, edadMujerSoltera);
    printf("El valor total es: %d\n", valorTotal);









	return EXIT_SUCCESS;
}
