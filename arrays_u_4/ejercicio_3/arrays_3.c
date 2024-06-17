#include <stdio.h>

int numeros[5], resultado;

int main()
{
    printf("Ingrese 5 numeros positivos:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
        resultado = resultado + numeros[i];
    }
    printf("La suma de los numeros es: %d", resultado);
    return 0;
}