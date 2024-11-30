#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int dia[7];
    int total=0;

    srand(time(0));

    //Questão a) e d)
    for(int i=0; i<7; i++){
        dia[i]= 1000 + rand() % 50000;
        if(dia[i] >= 10000){
            prinf("voce atingiu sua meta de passos no dia %d\n", i+1);
        }
    }
    
    //Questão b) e c)
    for(int i=0; i<7; i++){
       total+= dia[i];
    }
    printf("Passos total durante a semana: %d\n", total);
    printf("A media de passos foi de %d\n", total/7);

    return 0;
}