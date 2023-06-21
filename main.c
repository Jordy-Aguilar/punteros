#include <stdio.h>


void sumarArregloEscalar(float arreglo[], int tamanio, float escalar) {

    for (int i = 0; i < tamanio - 1; i++) {

        arreglo[i] += escalar;

    }

}




int main() {

    float arreglo[5];

    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);

    float escalar;




    printf("Ingrese los 5 numeros del arreglo:\n");

    for (int i = 0; i < tamanio; i++) {

        scanf("%f", &arreglo[i]);

    }




    printf("Ingrese el escalar: ");

    scanf("%f", &escalar);




    sumarArregloEscalar(arreglo, tamanio, escalar);




    printf("Arreglo resultante despues de la suma:\n");

    for (int i = 0; i < tamanio; i++) {

        printf("%.2f ", arreglo[i]);

    }

    printf("\n");




    return 0;

}