#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, numMaq, escolha, escolhaMaq; 
    int soma=0;
    char escolhaUsu[5];

    //escolha da maquina
    srand(time(0));
    numMaq = 1 + rand() % 5;
    

    //escolha do usuario
    printf("Escolha par ou impar:\n");
    scanf("%s", &escolhaUsu);
    escolha = toupper(escolhaUsu);

    if(escolhaUsu == 'IMPAR'){
        escolha = 1;
    }else {
        escolha = 2;
    }

    printf("Escolha um numero de 1 a 5:\n ");
    scanf("%d", &num);

    soma = num+numMaq;
    if(soma%2 == 0 && escolha == 2){
        printf("O usuario ganhou!\n");
        printf("----------------------------------\n");
        printf("num maquina: %d\n", numMaq);
   
    }else if(soma%2 != 0 && escolha == 1){
        printf("O usuario ganhou!\n");
        printf("----------------------------------\n");
        printf("num maquina: %d\n", numMaq);

    }else{
        printf("A maquina ganhou!\n");
        printf("----------------------------------\n");
        printf("num maquina: %d\n", numMaq);
    }



   
  
    return 1;
}

