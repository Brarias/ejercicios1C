
int validacionFahrenheit(int temperatura)
{
	int retorno = -1;

	if(temperatura > 32 && temperatura < 212){
			retorno = 0;
		}


	return retorno;

}
int validacionCelsius(int temperatura)
{
	int retorno = -1;

	if(temperatura > 0 && temperatura < 100){
		retorno = 0;
	}


	return retorno;

}
