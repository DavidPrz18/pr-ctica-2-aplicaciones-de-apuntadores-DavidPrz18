// 11. Buscar en un Arreglo
// Escribe un programa que busque un número en un arreglo de enteros. Si el número se encuentra en el arreglo, el programa deberá mostrar la dirección de memoria del elemento. Utiliza apuntadores para acceder a los elementos del arreglo.
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for(int *ptr = arr; ptr < arr + tamaño; ptr++){
        if(*ptr == valor){
            return ptr;
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int valor;
    int tamaño = 5;

    // Código para buscar un número y mostrar su dirección
    printf("dame el valor de un numero: \n");

    scanf("%d", &valor);

    int *direccion = buscarElemento(arr, tamaño, valor);

    if(direccion != NULL){
        printf("la direccion del valor %d es: %p\n", valor, direccion);
    }else { 
        printf("El elemento %d no se encuentra en el arreglo\n", valor);
    }

    return 0;
}
