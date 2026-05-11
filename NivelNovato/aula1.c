#include <stdio.h>

int main(){
    int idade = 20;
    int quantidade = 1;
    float altura = 1.83;
    double peso = 78.5;
    char letra = 'A';
    char nome[20]  =  "jose";

    printf("A idade é: %i\n", idade);
    printf("O nome é: %s\n", nome);
    printf ("Digite sua idade:");


    scanf("%d", &idade);
    printf("A idade é:%d", idade);

}