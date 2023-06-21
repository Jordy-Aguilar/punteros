#include <stdio.h>




int compararCadenas(const char *cadena1, const char *cadena2) {

    while ( *cadena2 && *cadena1 == *cadena2) {

        cadena1++;

        cadena2++;

    }




    if (*cadena1 == *cadena2) {

        return 1;  // Cadenas iguales

    } else {

        return 0;  // Cadenas diferentes

    }

}




int main(void) {

    char cadena1[100];

    char cadena2[100];




    printf("Ingrese la primera cadena: ");

    scanf("%s", cadena1);




    printf("Ingrese la segunda cadena: ");

    scanf("%s", cadena2);




    int resultado = compararCadenas(cadena1, cadena2);




    if (resultado == 1) {

        printf("Las cadenas son iguales.\n");

    } else {

        printf("Las cadenas son diferentes.\n");

    }




    return 0;

}