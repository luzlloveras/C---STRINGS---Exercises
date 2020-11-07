// Compara un nombre ingresado por teclado con el nombre Luis

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char STR1[20], STR2[20];

    do
    {
        printf("\nIngrese nombre:\t");
        gets(STR1);
        if (stricmp(STR1, "Luis") > 0)
            printf("%s es mayor a Luis", STR1);
        if (stricmp(STR1, "Luis") == 0)
            printf("%s es igual a Luis", STR1);
        if (stricmp(STR1, "Luis") < 0)
            printf("%s es menor a Luis", STR1);

        printf("\nDesea continuar?");
        gets(STR2); 

    } while (stricmp(STR2, "no"));

    return 0;
}
