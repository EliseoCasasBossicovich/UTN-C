#include <stdio.h>

int totalSuma = 0, tabla[4][3];

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Ingresa el numero de la posicion %d - %d: \n", i, j);
            scanf("%d", &tabla[i][j]);
            totalSuma += tabla[i][j];
        }
    }

    printf("La tabla numerica quedo de esta forma: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 2; j++)
        {
            printf("%d\t", tabla[i][j]);
        }
        printf("\n");
    }

    printf("La suma de todos los numeros es: %d\n", totalSuma);

    return 0;
}