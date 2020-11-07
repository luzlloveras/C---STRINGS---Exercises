// Automatizacion de carga de vector e impresion de la misma en pantalla

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 12
#define LARGO 20

void CARGAR (char [][LARGO], int);
void MIRAR (char [][LARGO], int);

int main()
{
	char VS[NUM][LARGO];	

	CARGAR (VS, NUM);
	MIRAR (VS, NUM);
		
	printf("\n\n\n");
	
	return 0;
}

void CARGAR (char V[][LARGO], int N)
{
	int i;
	
	//VECTOR AUXILIAR
	char VEC[][LARGO] = {"PEPE", "LOLA", "CAROLINA", "FACUNDO", "LILO", "STICH", "THELMA", "LOUIS", "BONNIE", "CLYDE", "ANA", "LAURA"} ; 
	
	for (i=0; i<N; i++)
	{
		strcpy(V[i], VEC[i]);
	}
}
	
void MIRAR (char V[][LARGO], int N)
{
	int i;
	printf("\n\n\tImpresion de los datos:");
	for (i=0; i<N; i++)
		printf("\n\n\t %s", V[i]);
	getchar();
}
