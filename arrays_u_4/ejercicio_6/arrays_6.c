#include <stdio.h>

int cantNum, numRepetido, maxRepeticones, numMasFrecuencia, cuentaActual;

int main()
{

    printf("Indique cuantos numero desea ingresar:\n");

    scanf("%d", &cantNum);
    int numeros[cantNum];

    printf("Ingrese los %d numeros positivos enteros que desee:\n", cantNum);

    for (int i = 0; i < cantNum; i++)
    {
        scanf("%d", &numeros[i]);
    }

    maxRepeticones = 0;
    numMasFrecuencia = numeros[0];

    for (int i = 0; i < cantNum; i++)
    {
        cuentaActual = 0;
        for (int j = i; j < cantNum; j++)
        {
            if (numeros[i] == numeros[j])
            {
                cuentaActual ++;
            }
            if (cuentaActual > maxRepeticones)
            {
                maxRepeticones = cuentaActual;
                numMasFrecuencia = numeros[i];
            }
        }
    }
    printf("El numero que se repite mas veces es %d y se repite %d veces.\n", numMasFrecuencia, maxRepeticones);

        return 0;
}