/* LUIS PINEDA
Crear e imprimir todos los elementos de un arreglo tridimensional, cuyas dimensiones sean ingresadas por el
usuario. El programa debe inicializar todas las matrices del arreglo en ceros, a excepción de la última matriz que debe ser inicializada en unos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variables a usar
    int fila = 0, columna = 0, profundidad = 0;

    printf("***** ARREGLO TRIDIMENSIONAL ****\n");
    printf("Ingrese la dimension de 'fila':\n");
    scanf("%d", &fila);
    printf("Ingrese la dimension de 'columna':\n");
    scanf("%d", &columna);
    printf("Ingrese la dimension de 'profundidad':\n");
    scanf("%d", &profundidad);

    // Definimos la matriz con sus 3 parametros
    int MatrizTridi[profundidad][fila][columna];

    for (int k = 0; k < profundidad; k++)
    {
        for (int i = 0; i < fila; i++)
        {
            for (int j = 0; j < columna; j++)
            {
                // Se definel valor de cero para la matriz
                if (k == (profundidad-1))
                {
                    MatrizTridi[k][i][j] = 1;
                }else{
                
                MatrizTridi[k][i][j] = 0;
                }
                // Se usa el bucle for para imprimir directamente la matriz
                printf("%4d |", MatrizTridi[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
