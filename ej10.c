// 10. Ordenamiento con Apuntadores (Burbuja)
// Escribe un programa que ordene un arreglo de enteros utilizando el algoritmo de ordenamiento Burbuja. Utiliza apuntadores para acceder a los elementos del arreglo.
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    // Implementar algoritmo de ordenamiento aquí
    tamaño = 5;
    for(int i = 0; i < tamaño - 1; i++){
        for(int j = 0; j < tamaño -1 - i; j++){
            if(*(arr + j) > *(arr + j + 1) ){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }

    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tamaño = 5;
    // Código para ordenar y mostrar el arreglo
    printf("Este es el arreglo sin ordenar\n:");
    for(int i = 0; i < tamaño; i++){
        printf("arr[%d]: %d\n", i, arr[i]); 
    }

    ordenarBurbuja(arr, 5);
    printf("Este es el arreglo ya ordenado:\n");
    for(int i = 0; i < tamaño; i++){
        printf("arr[%d]: %d\n", i, arr[i]); 
    }

    return 0;
}
