// Intercambio de Valores
// Escribe un programa que intercambie los valores de dos variables enteras utilizando apuntadores.
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main() {
    int arr[] = {5, 10};
    // Código para llamar a la función y mostrar los valores intercambiados
    printf("Antes del intercambio: a = %d, b = %d\n", arr[0], arr[1]);
    intercambiar(&arr[0], &arr[1]); //aquí se invoca a la función para que haga el intercambio
    printf("Despues del intercambio: a = %d, b = %d\n", arr[0], arr[1]);
    return 0;
}
