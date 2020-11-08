// Busqueda secuencial de un vector de strings

#include <stdio.h>
#include <string.h>

#define MAX 20
#define NUM 10

int main()
{
	char MAT[NUM][MAX], palabra[MAX];
	int i, POS = -1;
	
	//Carga de vector MAT
	for (i=0; i<NUM; i++)
	{
		printf("Palabra %3d : ", i);
		gets(MAT[i]);
	}
	
	// Ingresar palabra a buscar
	printf("\n\n Ingrese palabra a buscar: ");
	gets(palabra);
	
	// Busqueda secuencial de la palabra buscada
	for (i=0; (i<NUM) && (POS==-1); i++)
		if ( strcmp(MAT[i], palabra) == 0)
			POS = i;
	
	// Impresion
	printf("\n\n Vector de busqueda\n");
	for (i=0; i<NUM; i++)
		printf("\n %10d \t %s", i, MAT[i]);
	printf("\n\n");

	if (POS == -1)
		printf("%s no se encontro", palabra);
	else
		printf("%s esta en la posicion %d", palabra, POS);
	
	printf("\nFin del programa\n");
		
	return 0;
}
