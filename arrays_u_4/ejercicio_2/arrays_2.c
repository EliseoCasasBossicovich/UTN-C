#include <stdio.h>

int numeros[5];

int main()
{
    printf("Digite 5 numeros: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("Los numeros ingresados fueron: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numeros[i]);
    }
    return 0;
}