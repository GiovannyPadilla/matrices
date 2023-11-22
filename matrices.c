#include <stdio.h>

int main() {
    int filas, columna;
    printf("Ingrese el numero de filas\n");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d", &columna);

    int matriz[columna][filas];

    // Crear la matriz por fila y columna
    int cont = 1;
    for (int m = 0; m < filas; m++) {
        for (int n = 0; n < columna; n++) {
            matriz[n][m] = cont++;
        }
    }
    
    // Imprimir la matriz
    printf("Matriz resultante:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columna; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}

