/*
 ============================================================================
 Name        : Ejercicio.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
*   EJERCICIO DE ARRAYS Y FUNCIONES
*	de un array de n elementos enteros debemos obtener:
*
*	1- necesito saber si existe un número en el array
*	(ej: {2,66,6,7,2,4,7,2,2,4} ,
*	a-el 6 existe
*	b-el 9 no existe
*	2- necesito saber cuantas veces aparece un número en el array
*	(ej: {2,66,6,7,2,4,7,2,2,4} ,el 4 esta dos veces
*	3- necesito buscar un número y que me retorne el indice del mismo
*	(ej:{2,66,6,7,2,4,7,2,2,4} , el indice de 66 es 1)
*	4- el número máximo ingresado
*	5- el número mínimo ingresado
*	6- necesito saber la cantidad veces que esta ese máximo en el array
*	(ej: {2,66,6,7,2,4,7,2,2,4} en este array el máximo esta dos veces)
*	7- necesito saber la cantidad veces que esta ese mínimo en el array
*	(ej: {2,66,6,7,2,4,7,2,2,4}en este array el minimo esta cuatro veces)
*
*	Definir las funciones necesarias con los parametros que usted crea necesario
*	cargar el array con los siguientes datos = {2,66,6,7,2,4,7,2,2,4}
*/

#include <stdio.h>
#include <stdlib.h>

#define T 10

int EsNumerico(/*char mensaje[]*/int auxiliar);

int ValidarNumeroExistenteInt(int arrayParametro[], int tam, int auxiliar);

int MostrarArray(char mensaje[], int arrayParametro[], int tam);

int main()
{
    system("color F0"); //Manera para cambiar de color la consola.

	int arrayNumeros[10]={2,66,6,7,2,4,7,2,2,4};

	int valorDeRetorno;
	int auxiliarInt;

	valorDeRetorno = MostrarArray("El numero #", arrayNumeros, T);

	printf("\n\nLos numeros ya estan cargados, ingrese algun numero para ver si existe o no: \n\n");
	scanf("%d",&auxiliarInt);

    valorDeRetorno = EsNumerico(/*"\nERROR. Reingrese un numero:\n"*/auxiliarInt);
    if(valorDeRetorno == 0)
    {
        printf("Es un numero!!! \n");
        valorDeRetorno = ValidarNumeroExistenteInt(arrayNumeros, T, auxiliarInt);
        if(valorDeRetorno == 0)
        {
            printf("El %d existe!!", auxiliarInt);
        }
        else
        {
            //if(valorDeRetorno == 1)

                printf("No se ah encontrado el %d en los numeros cargados.", auxiliarInt);

        }
    }
    else
    {
            if(valorDeRetorno == 1)
            {
                    while(!(auxiliarInt > '0' || auxiliarInt < '9'))
                    {
                        printf("ERROR. Reingrese: \n");
                        scanf("%d",&auxiliarInt);
                    }

                    valorDeRetorno = ValidarNumeroExistenteInt(arrayNumeros, T, auxiliarInt);
                    if(valorDeRetorno == 0)
                    {
                        printf("El %d existe!!", auxiliarInt);
                    }
                    else
                    {
                        //if(valorDeRetorno == 1)

                        printf("No se ah encontrado el %d en los numeros cargados.", auxiliarInt);
                    }
            }
    }
	/*valorDeRetorno = ValidarNumeroExistenteInt(arrayNumeros, T, auxiliarInt );
	if(valorDeRetorno == 0)
	{
		printf("El %d existe!!", auxiliarInt);
	}
	else
	{
        if(valorDeRetorno == 1)
        {
            printf("No se ah encontrado el %d en los numeros cargados.", auxiliarInt);
        }
    }
    */
	printf("\nvalor de retorno: %d\n", valorDeRetorno);
    system("pause");

	return EXIT_SUCCESS;
}

int MostrarArray(char mensaje[], int arrayParametro[], int tam)
{
	int retorno = -1;
	int i;

	if(arrayParametro != NULL && tam >= 0)
	{
		retorno = 0;
		for(i=0;i<tam;i++)
		{
			printf("%s%d: %3d\n",mensaje, i, arrayParametro[i]);
		}
	}
	return retorno;
}

int ValidarNumeroExistenteInt(int arrayParametro[], int tam, int auxiliar)
{
	int i;
	int retorno = -1;

	if(arrayParametro != NULL && tam >= 0)
	{
		for(i=0;i<tam;i++)
		{
			if(arrayParametro[i] == auxiliar)
			{
				retorno = 0;
				break;
			}
			else
			{
                retorno = 1;
			}
		}
	}
	return retorno;
}

int EsNumerico(/*char mensajeError[]*/ int auxiliar)
{
    int retorno = -1;


    if(auxiliar > '0' || auxiliar < '9')
    {
        retorno = 0; // Es NUMERICO
    }
    else
    {
        retorno = 1; // No es NUMERICO
        /*while(!(auxiliar > '0' || auxiliar < '9'))
        {
            printf("%s", mensajeError);
            scanf("%d", &auxiliar);
        }
        retorno = 0;*/
    }

    return retorno;
}
