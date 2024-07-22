#include <stdio.h>

int cantidadVendedores;
float totalEmpresa, totalVendedor;
int main(){

printf("Introduce la cantidad de vendedores (Minimo 1):\n");
scanf("%d", &cantidadVendedores);

    while (cantidadVendedores < 1)
    {
        printf("Minimo tiene que haber 1 vendedor:\n");
        scanf("%d", &cantidadVendedores);
    }

    float vendedores[cantidadVendedores][5];

    printf("Ingrese las ventas de los 5 productos por vendedor:\n");

    for (int i = 0; i < cantidadVendedores; i++)
    {
        printf("Vendedor %d:\n", i+1);

        for (int j = 0; j < 5; j++)
        {
            printf("Ingrese el total del producto %d:\n", j+1);
            scanf("%f", &vendedores[i][j]);
        }
        
    }
    
    for (int i = 0; i < cantidadVendedores; i++)
    {
        totalVendedor = 0;
        for (int j = 0; j < 5; j++)
        {
            totalVendedor = totalVendedor + vendedores[i][j];
        }
        printf("El total de ventas del vendedor %d fue: %.2f\n", i+1, totalVendedor);
        totalEmpresa = totalEmpresa + totalVendedor;
    }
    printf("El total de ingresos de la tienda fueron: %.2f\n", totalEmpresa);

return 0;
}