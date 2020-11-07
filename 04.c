// Imprime en pantalla una tabla de ciudades y su representacion en caracteres alfabeticos
// Imprime en pantalla una tabla de ciudades y su representacion en codigo ASCII
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j;
	char CIUDAD[][18] = {"ALEJANDRIA", "CONSTANTINOPLA", "CARTAGO", "ESPARTA", "BABILONIA"};
	
	printf("\n\n %-15s \t %s", "Ciudades", "Tabla representada en letras\n");
	for (i=0; i<5; i++)
	{
		printf("\n\n %-15s \t", CIUDAD[i]);
		for (j=0; j<18; j++)
			printf("%3c", CIUDAD[i][j]);
	}
	
	printf("\n\n\n\n %-15s \t %s", "Ciudades", "Tabla representada en codigo ASCII\n");
	// Verificacion de inexistencia de basura remanente 
	for (i=0; i<5; i++)
	{
		printf("\n\n %-15s \t", CIUDAD[i]);
		for (j=0; j<18; j++)
			printf("%3d", CIUDAD[i][j]);
	}
	printf("\n\n\n");
	
	return 0;
}
