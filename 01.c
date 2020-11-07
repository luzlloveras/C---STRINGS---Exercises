// Ingresar 10 nombres y mostrar la longitud del nombre mas largo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, largo_vec, largo=0, posicion;
    char vector[10][20];
    printf("\nIngrese 10 nombres\n");
    for(i=0; i<4;i++)
        gets(vector[i]);
    
    for (i=0; i<10; i++)
    {
        largo_vec = strlen(vector[i]);
        if (largo_vec > largo)
        {
            largo = largo_vec;
            posicion = i;
        }
    }

    printf("\n\nEl vector mas largo esta en el vector[%d] = ", posicion);
    puts(vector[posicion]);

    return 0;
}
