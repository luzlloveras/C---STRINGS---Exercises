// Automatizacion de la carga e impresion de una tabla de tres datos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 12
#define LARGO 20

void CARGAR (char [][LARGO], char[], int[], int);
void MIRAR (char [][LARGO], char[], int[], int);

int main()
{
	char NOM[NUM][LARGO];	
	char SEX[NUM];
	int NOTA[NUM];
	srand(7);
	CARGAR (NOM, SEX, NOTA, NUM);
	MIRAR (NOM, SEX, NOTA, NUM);	
	printf("\n\n\n");
	
	return 0;
}

void CARGAR (char NOM[][LARGO], char S[], int NOT[], int N)
{
	int i;
	
	//VECTORES AUXILIARES
	char VEC[][LARGO] = {"PEPE", "LOLA", "CAROLINA", "FACUNDO", "LILO", "STICH", "THELMA", "LOUIS", "BONNIE", "CLYDE", "ANA", "LAURA"}; 
	char SEXO[] = {'M', 'F', 'F', 'M', 'F', 'M', 'F', 'F', 'F', 'M', 'F', 'F'}; 
	
	for (i=0; i<N; i++)
	{
		strcpy(NOM[i], VEC[i]);
		S[i] = SEXO[i];
		NOT[i] = 2 + rand() % 9;
	}
}
	
void MIRAR (char NOM[][LARGO], char S[], int NOT[], int N)
{
	int i;
	printf("\n\t %-15s %10s %10s\n\n", "NOMBRE", "SEXO", "NOTA");
	for (i=0; i<N; i++)
		printf("\n\t %-15s %10c %10d", NOM[i], S[i], NOT[i]);
	getchar();
}

