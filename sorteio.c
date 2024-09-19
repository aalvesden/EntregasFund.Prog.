#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int count=0;
    int num;
    float media, soma=0;
    
    srand(time(0));

    while (count <5){
       num = rand() % 11;

       printf("Num sorteado: %d\n", num);

       soma = soma + num;

        count++;
    }

    media = soma/5;
    printf("%.1f eh a media entre as notas", media);
    return 0;
}