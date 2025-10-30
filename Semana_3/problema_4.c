#include <stdio.h>
#include <ctype.h>

int main(){
    char jogada1;
    char jogada2;

    printf("Pedra, papel ou tesoura\n\n Pedra(P)\n Papel(A)\n Tesoura(T)\n\n");
    printf("Jogador 1 faça sua jogada: ");
    scanf(" %c", &jogada1);

    printf("Jogador 2 faça sua jogada: ");
    scanf(" %c", &jogada1);

    jogada1 = toupper(jogada1);
    jogada2 = toupper(jogada2);

    if( jogada1 == jogada2){
        printf("Empate!");
    }

    else if( jogada1 == 'P' && jogada2 == 'T') {
    printf("Jogador 1 ganhou!");
    }
    else if( jogada1 == 'T' && jogada2 == 'A') {
        printf("Jogador 1 ganhou!");
    }

    else if( jogada1 == 'A' && jogada2 == 'P') {
        printf("Jogador 1 ganhou!");
    }

    else {
        printf("Jogador 2 ganhou!");
    }
}