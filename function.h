#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "utils.h"

#define MAX 100

int convertirABaseDecimal(char numero[], int base)
{
	int longitud = strlen(numero);
	int valorDecimal = 0;

	for (int i = 0; i < longitud; i++)
	{
		int digito;

		if (numero[i] >= '0' && numero[i] <= '9')
			digito = numero[i] - '0';
		else if (numero[i] >= 'A' && numero[i] <= 'F')
			digito = numero[i] - 'A' + 10;
		else if (numero[i] >= 'a' && numero[i] <= 'f')
			digito = numero[i] - 'a' + 10;
		else
		{
			printf("Carácter no válido en el número.\n");
			return -1;
			timer(1); // temporizador del tiempo que se le asigne
		}

		if (digito >= base)
		{
			printf("Dígito fuera del rango para la base %d.\n", base);
			return -1;
			timer(1);
		}

		valorDecimal += digito * pow(base, longitud - i - 1);
	}

	return valorDecimal;
}

#endif // __FUNCTION_H__