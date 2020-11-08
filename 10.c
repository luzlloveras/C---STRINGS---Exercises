// Explicar diferencia de comportamiento entre datos cargados: "PEPE" y "LOLA" / "CARLOS" y "MAGNO"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int i;
	char VEC[2][5] = {"LOLA", "PEPE"};
	
	// Cuando UN vector esta definido con una longitud de caracteres de 5 lugares
	// Al contemplar el espacio nulo en el vector, la palabra debera tener 4 letras
	printf("Impresion CORRECTA de los vectores:\n");
	for(i=0; i<2; i++)
		puts(VEC[i]);
	printf("\n\n\n");
	
	
	// Si al vector lo cargamos con palabras que exceden el limite de longitud
	// No solo se cortará la primer palabra, tambien aparecera sucedida la siguiente.
	char VEC1[2][5] = {"ROBERTO", "CARLOS"};
	printf("Impresion INCORRECTA de los vectores:\n");
	for(i=0; i<2; i++)
		puts(VEC1[i]);
	printf("\n\n\n");
	
	return 0;
}
