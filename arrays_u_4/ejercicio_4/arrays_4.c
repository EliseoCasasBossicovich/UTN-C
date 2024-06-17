#include <stdio.h>

int numeros[10], numMayor;

int main()
{
    printf("Escribe 10 numeros positivos enteros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
        if (numeros[i] > numMayor)
        {
            numMayor = numeros[i];
        }
    }
    printf("El numero mayor es: %d\n", numMayor);
    return 0;
}