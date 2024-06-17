#include <stdio.h>

int numeros[7];

int main()
{
    numeros[0] = 3;
    numeros[1] = 4;
    numeros[2] = 5;
    numeros[3] = 6;
    numeros[4] = 7;
    numeros[5] = 8;
    numeros[6] = 9;
    printf("Los Numeros ingresados son:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", numeros[i]);
    }
    return 0;
}
