/*
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:X
Cantidad de positivos y negativos.x
Sumatoria de los pares.x
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones imparesld.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int ObtenerNumero(char* mensaje, int minimo, int maximo);
void CargarListadoNumeros(int numeros[], int size);
void listadoNumerosIngresados(int numeros[], int size);
void listadoNumerosPares(int numeros[], int size);
void listadoNumerosPosicionesImpares(int numeros[], int size);
int  ContarPositivos(int numeros[], int size);
int  ContarNegativos(int numeros[], int size);
int  DevolverSigno(int );
int DeterminarParidad(int numero);
int SumatoriaPares(int numeros[], int size);
int mayoresImpares(int numeros[], int size);



int main()
{
	setbuf(stdout, NULL);

    int numerosIngresados[TAM];
    int cantidadNegativos;
    int cantidadPositivos;
    int SumatoriaPares(int numeros[], int size);
    int acumuladorPares;
    int mayorImpar;

    CargarListadoNumeros(numerosIngresados,TAM);


    cantidadNegativos=ContarNegativos(numerosIngresados,TAM);
    printf("\nLa cantidad de negativos es %d", cantidadNegativos);
    cantidadPositivos=ContarPositivos(numerosIngresados,TAM);
        printf("\nLa cantidad de positivos es %d", cantidadPositivos);
    acumuladorPares=SumatoriaPares(numerosIngresados,TAM);
        printf("\nLa sumatoria de pares es %d",acumuladorPares);
    mayorImpar = mayoresImpares(numerosIngresados, TAM);
    printf("\nEl mayor de los impares es: %d", mayorImpar);
    listadoNumerosIngresados(numerosIngresados, TAM);
    printf("Los numeros pares son: \n");
    listadoNumerosPares(numerosIngresados, TAM);
    printf("Los numeros en la posiciones impares son: ");
    listadoNumerosPosicionesImpares(numerosIngresados, TAM);








        return 0;

}

int ObtenerNumero(char* mensaje, int minimo, int maximo) {
    int numeroIngresado;

    printf("%s", mensaje);
    scanf("%d", &numeroIngresado);
    while (numeroIngresado < minimo || numeroIngresado > maximo) {
        printf("Error!!! Vuelva a ingresar el numero... ");
        scanf("%d", &numeroIngresado);
    }

    return numeroIngresado;
}
void CargarListadoNumeros(int numeros[], int size){
    for (int i =0; i<size ;i++){
          numeros[i] = ObtenerNumero("ingrese un numero: ", -1000,1000);

    }
}
void ContadorPosiYNega(int numeros[], int size)
{
    int contadorPositivo;
    int contadorNegativo;

    contadorPositivo=0;
    contadorNegativo=0;

    for(int i=0;i<size;i++)
    {

    }

    printf("\nLa cantidad de positivos es %d", contadorPositivo);
    printf("\nLa cantidad de negativos es %d", contadorNegativo);

}
int DevolverSigno(int numeroIngresado)
{
    int retorno;
    retorno=0;

    if(numeroIngresado < 0)
    {
        retorno=-1;
    }
    else
    {
        if(numeroIngresado >0)
        {
            retorno=1;
        }

    }
    return retorno;

}
int ContarNegativos(int numeros[], int size)
{
    int contadorNegativo;
    int esNegativo;
    contadorNegativo=0;
   for(int i=0;i<size;i++)
   {
       esNegativo=DevolverSigno(numeros[i]);
       if(esNegativo==-1)
       {
           contadorNegativo++;
       }
   }
   return contadorNegativo;
}
int ContarPositivos(int numeros[], int size)
{
    int contadorPositivo;
    int esPositivo;
    contadorPositivo = 0;

    for(int i=0;i<size;i++)
    {
        esPositivo=DevolverSigno(numeros[i]);
        if(esPositivo==1)
        {
            contadorPositivo++;
        }
    }
    return contadorPositivo;
}
int DeterminarParidad(int numero)
{
    int paridad;
    if(numero%2==0)
    {
    paridad =1;
    }else{
    paridad=0;
    }
    return paridad;
}
int SumatoriaPares(int numeros[], int size)
{
    int esPar;
    int acumuladorPares;

    acumuladorPares= 0;

    for(int i=0; i<size; i++)
    {
     esPar=DeterminarParidad(numeros[i]);
     if(esPar==1)
     {
        acumuladorPares+=numeros[i];
     }

    }
    return acumuladorPares;
}

int mayoresImpares(int numeros[], int size){
	int mayor;
	int esPar;
	int flagPar;
	flagPar = 0;
	mayor = 0;

	for(int i = 0; i < size; i++){
		esPar = DeterminarParidad(numeros[i]);
		if(flagPar == 0 && esPar ==0){
			mayor = numeros[i];
			flagPar = 1;
		}if(mayor < numeros[i] && esPar ==0){
		    mayor = numeros[i];
		}
	}


	return mayor;
}

void listadoNumerosIngresados(int numeros[], int size)
{
    for(int i = 0; i < size; i++){
		printf("\nIndice: %d valor: %d", i, numeros[i]);
		}
}

void listadoNumerosPares(int numeros[], int size)
{
    int paridad;


    for(int i = 0; i < size; i++){
        paridad = DeterminarParidad(numeros[i]);
        if(paridad == 1){
		printf(" %d", numeros[i]);
		}

    }
}

void listadoNumerosPosicionesImpares(int numeros[], int size)
{
    int paridad;


    for(int i = 0; i < size; i++){
        paridad = DeterminarParidad(i);
        if(paridad == 0){
		printf(" %d", numeros[i]);
		}

    }
}



