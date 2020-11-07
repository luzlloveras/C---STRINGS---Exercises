// Se ingresan por teclado 8 nombres y se muestran en pantalla

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 8
#define LARGO 20

int main()
{
	char VS[NUM][LARGO];
	int i;
		
	// CARGA DE DATOS
	for (i=0; i<NUM; i++)
	{
		printf("\n\n NOMBRE:");
		gets(VS[i]);	
	}
	
	// IMPRESION DE DATOS
	printf("\n\n\tImpresion de los datos:");
	for (i=0; i<NUM; i++)
	{
		printf("\n\n\t");
		puts(VS[i]);
	}
	
	printf("\n\n\n");
	
	return 0;
}
