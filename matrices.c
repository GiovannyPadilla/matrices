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
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columna; j++) {
            matriz[j][i] = cont++;
        }
    }
    return 0;
}
