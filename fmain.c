#include <stdio.h>
#include "funciones.h"
#define SIZE 10

int main() {
    int numeros[SIZE];
    
    // Leer los números ingresados por el usuario
    printf("Ingresa 10 numeros:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calcular la media
    float media = calcularMedia(numeros, SIZE);
    
    // Ordenar el arreglo para calcular la mediana
    ordenar(numeros, SIZE);
    
    // Calcular la mediana
    float mediana = ordenar(numeros, SIZE);
    
    // Encontrar el número mayor y el menor
    int mayor, menor;
    encontrarMayorYMenor(numeros, SIZE, &mayor, &menor);

    // Mostrar los resultados
    printf("\nResultados:\n");
    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    encontrar_moda(numeros,SIZE);
    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);

    return 0;
}