#include <stdio.h>

int main()
{

    char *paisesCiudades[4][4] = {
        {"Pais ", "C1 ", "C2 ", "C3 " },
        {"Arg", "BsAs ", "Ros ", "Cor "},
        {"Col", "Cali", "Bbt", "St M"},
        {"Br", "Brasilia", "Rdj", "Sn P"}
    };

    printf("\nEl listado de paises es: \n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf(paisesCiudades[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}