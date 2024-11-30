#include <stdio.h>
#include <stdlib.h>

int main(){
    int dado[6];
    int jogada[6];
    int aux;

    for(int i=0; i<6; i++){
        scanf("%d",&dado[i]);
    }

    for(int i=0; i<6; i++){
        jogada[i] = dado[i];
        for(int j=0; i<6; i++){
            if(jogada[j] == dado[i]){
                aux++;
            }
        }
        printf("jogada %d: %d;\n", i+1, (aux/6)*100);
    }

    return 0;
}