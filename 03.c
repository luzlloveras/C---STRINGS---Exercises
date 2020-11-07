// Crear funcion que retorne 1 si la palabra ingresada es palindromo.
// Caso contrario retorno 0.
// Mostrar en pantalla el resultado. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int PALINDROMO (char[]);

int main()
{
 	char STR[30];
	printf("\nIngrese una palabra:\n");
	gets(STR);
	PALINDROMO (STR);
	if (PALINDROMO(STR) == 1)
		printf ("\n\n %s es palindromo", STR);
	else
		printf ("\n\n %s NO es palindromo", STR);
    return 0;
}

int PALINDROMO (char str[])
{
	int i, largo, cont = 0;
	largo = strlen(str);
	
	for (i=0; i<largo; i++)
	{
		if (str[i] == str[largo-i-1])
		cont++;
	}
	if (cont == largo)
		return 1;
	return 0;
}
