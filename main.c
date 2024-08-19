#include <stdio.h>
#include <string.h>
#include <math.h>
#include "function.h"
#include "utils.h"

int main()
{
	// variables
	char numero[100];
	int base;
	int resultado;

	clean_screen();

	// entrada de datos
	printf("Digite el numero en su base original (2, 4, 8 o 16): ");
	scanf("%s", numero);
	getchar();

	printf("Digite la base del numero (2, 4, 8 o 16): ");
	scanf("%d", &base);
	getchar();

	// validación de la base
	if ((base != 2) && (base != 4) && (base != 8) && (base != 16))
	{
		printf("Base incorrecta. Solo se admiten bases 2, 4, 8 y 16.\n");
		return 1;
		pause_programm();
	}

	resultado = convertirABaseDecimal(numero, base);

	if (resultado != -1)
	{
		clean_screen();
		printf("\nNumero: %d\nBase: %d\nDecimal: %d\n", numero, base, resultado);
		pause_programm();
	}

	printf("\nPrograma finalizado...");
	timer(1);
	return 0;
}
