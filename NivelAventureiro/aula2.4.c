#include <stdio.h>

int main(){
    float notas[5];
    float media = 0;
    int i;
    
    printf("Digite as 5 notas: \n");
    
    for(i = 0; i < 5; i++){
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media = media / 5;
 
    printf("A média é: %.2f\n", media);
    
    
    return 0;
}