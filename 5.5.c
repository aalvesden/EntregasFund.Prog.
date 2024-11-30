#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int consumo[30];
    int total=0;
    int maior = 0, menor = 0;

    srand(time(0));

    for(int i=0; i<30; i++){
        consumo = 100 + rand() % 500;
        total += consumo[i];
    }

    printf("Consumo total: %d.\n", total);
    printf("A media de consumo foi de %d por dia.\n", total/30);

    maior = consumo[0];
    for(int i=0; i<30; i++){
        if(maior < consumo[i]){
            maior = consumo[i];
        }
        if(menor > consumo[i]){
            menor = consumo[i];
        }
    }
    printf("Maior consumo: %d\n", maior);
    printf("Menor consumo: %d\n", menor);
    
    return 0;
}