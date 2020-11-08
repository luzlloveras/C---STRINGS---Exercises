//Realizar un programa que permita comprobar la diferencia de comportamiento entre las funciones gets() y scanf().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char frase_scanf[20], frase_gets[20];
	
	printf("Ingrese frase:\n");
	scanf("%s", frase_scanf);
	printf("\nRESULTADO AL USAR FUNCION SCANF:\n");
	printf("%s", frase_scanf);
	printf("\n\n");
	
	fflush(stdin);
	printf("\nIngrese frase:\n");
	gets(frase_gets);
	printf("\nRESULTADO AL USAR FUNCION GETS:\n");
	printf("%s", frase_gets);
	
	return 0;
}
