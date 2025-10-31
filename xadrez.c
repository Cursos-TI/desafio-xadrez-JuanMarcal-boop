#include <stdio.h>
int main(){
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    for(torre; torre <= 5; torre++){
        printf("Torre: Direita\n");// Movimento da torre
    }
    printf("\n");

    while(bispo <= 5){
        printf("Bispo: Cima, Direita\n"); // Movimento do bispo
        bispo++;
    }
    printf("\n");

    do{
        printf("Rainha: Esquerda\n"); // Movimento da rainha
        rainha++;
    } while(rainha <= 8);
    
    printf("\n");

    while(cavalo--){
        for (int i = 1; i <= 2; i++){
            printf("Cavalo: Baixo\n");
        }
        printf("Cavalo: Esquerda\n");
    }
    
return 0;
}
