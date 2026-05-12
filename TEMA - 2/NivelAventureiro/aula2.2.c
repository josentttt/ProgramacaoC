#include <stdio.h>

int main(){

    int numero1 = 1, resultado;

    printf("Antes do incremento: %d\n", numero1);
    //numero1++;
    //printf("Depois do incremento: %d\n", numero1);
    //pos incremento:
    //resultado = numero1; 
    //numero++;
    resultado = numero1++;
    printf("Apos Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //numero1--;
    //printf("Depois do decremento: %d\n", numero1);
}