#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, chute = 0;

    srand(time(0));
    num = 1 + rand() % 10;

    printf("Tente descobrir o numero sorteado (O numero vai de 1 a 10)\n");
    printf("Digite o primeiro chute:\n"); 
    scanf("%d", &chute);

    while(chute != num){
        if(chute > num){
            printf("O numero eh menor!");
            printf("Tente de novo:\n");
            scanf("%d", &chute);
        }else if(chute < num){
            printf("O numero eh maior!");
            printf("Tente de novo:\n");
            scanf("%d", &chute);
        }
    }
    if(chute == num){
        printf("Vove acertou!");
    }

    return 0;
}