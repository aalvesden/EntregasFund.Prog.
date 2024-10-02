#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int num, media=0, maior, menor, cont=0;
    srand(time(0));

    for(int i=0; i<5; i++){
        num = 1 + rand() % 100;
        while(cont == 0){
            maior = num;
            menor = num;
            printf("deu bom\n");
            cont++;
        }
     /*  printf("%d\n", num);   */      //Só tirar o comentario para fazer a verificação printando os valores sorteados.
        
        if(num>maior){
            maior = num;
        }else if(num<menor){
            menor = num;
        }

        media = media +num;

    }
    media = media/5;

    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("media: %d\n", media);


    return 0;
}