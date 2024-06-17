#include <stdio.h>

int tam;

int main()
{

    printf("Introduce el tamanio del arreglo (debe ser mayor que 2):\n");
    scanf("%d", &tam);

    while (tam <= 2)
    {
        printf("Valor incorrecto. Debe ser mayor que 2. Intentalo de nuevo:\n");
        scanf("%d", &tam);
    }

    int array1[tam];
    int array2[tam];
    int arrayResultado[tam];

    printf("Introduce los elementos del primer arreglo:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("Elemento %d:\n", i+1);
        scanf("%d", &array1[i]);
    }

    printf("Introduce los elementos del segundo arreglo:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("Elemento %d:\n", i+1);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        arrayResultado[i] = array1[i] + array1[i];
    }

    printf("La suma de ambos arreglos es:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("Elemento %d: %d\n", i, arrayResultado[i]);
    }

    return 0;
}