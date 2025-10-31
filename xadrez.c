#include <stdio.h>
int main(){
    int torre = 0, bispo = 0, rainha = 0;

    for(torre; torre <= 5; torre++){
        printf("Torre: Direita\n");// Movimento da torre
    }

    while(bispo <= 5){
        printf("Bispo: Cima, Direita\n"); // Movimento do bispo
        bispo++;
    }

    do{
        printf("Rainha: Esquerda\n"); // Movimento da rainha
        rainha++;
    }while(rainha <= 8);
     
return 0;
}
