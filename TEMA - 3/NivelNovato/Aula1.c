#include <stdio.h>
int main(){
//==================1==================
    /*int nota = 5;

    if (nota >= 7)
    {
        printf("Você passou!\n");
    }
    else
    {
        //printf("Você não passou!\n");
    }*/ 

//==============Meu Teste==============
    /*float nota1, nota2, nota3, media;
    int notaMinima = 7;

    printf("Digite sua 1a nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua 2a nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua 3a nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= notaMinima)
    {
        printf("Você passou, Parabéns! Sua média foi %.1f \n", media);
    }
    else
    {
        printf("Você não passou, estude mais! Sua média foi %.1f \n", media);
    }*/

//==================2==================
    int preco1, preco2;
    
    preco1 = 20;
    preco2 = 20;

    if (preco1 < preco2)
    {
        printf("O preço 1 é menor que o preço 2 \n");
    }
    else
        if (preco1 > preco2)
        {
            printf("O preço 1 é maior que o preço 2 \n");
        }
        else
        {
            printf("Os preços são iguais \n");
        }
    return 0;
}