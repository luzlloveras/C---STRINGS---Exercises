// Automatizacion de la carga e impresion de una tabla de dos datos: nombre y promedio.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 4
#define LARGO 20

void CARGAR (char [][LARGO], float[], int);
void MIRAR (char [][LARGO], float[], int);
void PROMEDIO_MAYOR (char [][LARGO], float[], int);

int main()
{
	char NOM[NUM][LARGO];
	float PROM[NUM];
	CARGAR (NOM, PROM, NUM);
	MIRAR (NOM, PROM, NUM);	
    PROMEDIO_MAYOR (NOM, PROM, NUM);	
	printf("\n\n\n");
	
	return 0;
}

void CARGAR (char nom[][LARGO], float prom[], int N)
{
	int i; 
	
	for (i=0; i<N; i++)
	{
		printf("\n Ingrese nombre:");
        gets(nom[i]);
        printf("\n Ingrese promedio:");
        scanf("%f", &prom[i]);
        fflush(stdin);
	}
}
	
void MIRAR (char nom[][LARGO], float prom[], int N)
{
	int i;
	printf("\n\t %-15s %10s\n\n", "NOMBRE", "PROMEDIO");
	for (i=0; i<N; i++)
		printf("\n\t %-15s %10.2f", nom[i], prom[i]);
	fflush(stdin);
}

void PROMEDIO_MAYOR (char nom[][LARGO], float prom[], int N)
{
	int i; 
    float auxprom;
    char auxnom[N];
	
	for (i=0; i<N; i++)
	{
		if (prom[i] < prom[i+1])
        {
            // swapping
            auxprom = prom[i];
            prom[i] = prom[i+1];
            prom[i+1] = auxprom;
        
            //arrastre nombres
            strcpy(auxnom, nom[i]);
            strcpy(nom[i], nom[i+1]);
            strcpy(nom[i+1], auxnom);
        }
	}
    printf("\n\nEl mejor promedio es del alumno %s con %.2f", nom[0], prom[0]);
}
