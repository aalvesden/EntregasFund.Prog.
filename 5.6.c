#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int player[4]{0, 0, 0, 0};
    int rodada;
    int ptWinner = 0, winner;
    
    srand(time(0));

    for (int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            rodada = 0 + rand() % 100;
            player[j] += rodada;

            if(rodada >= 80){
                printf("Rodada destaque! Jogador %d recebeu %d pontos :)\n", j+1, rodada);
            }
        }
    }
    ptWinner = jogador[0]
    for(int i=0; i<4; i++){
        if(jogador[i] > ptWinner){
            ptWinner = jogador[i];
            winner = i;
        }
    }
    printf("Jogador %d eh o ganhador!\n", winner);

    return 0;
}