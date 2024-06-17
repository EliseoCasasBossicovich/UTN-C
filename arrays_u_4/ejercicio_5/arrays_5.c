#include <stdio.h>

int mejoresPromedios, peoresPromdedios, i;
float num[10], totaltiempo, promedio;

int main()
{
    printf("Ingrese el tiempo de cada uno de los 10 corredores:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &num[i]);
        totaltiempo = totaltiempo + num[i];
    }

    promedio = totaltiempo / 10;

    for (i = 0; i < 10; i++)
    {
        if (num[i] > promedio)
        {
            mejoresPromedios = mejoresPromedios + 1;
        }
        else
        {
            peoresPromdedios = peoresPromdedios + 1;
        }
    }

    printf("El promedio de los tiempos es: %.2f\n", promedio);
    printf("Cantidad de mejoresPromedios:%d\n", mejoresPromedios);
    printf("Cantidad de peoresPromedios:%d\n", peoresPromdedios);
    
    return 0;
}

