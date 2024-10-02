#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, soma =0, numF, numG, numH, somaH=0;
    int impar=0, par=0, quant;
    srand(time(0));


    //Exercico A
    printf("Exercicio A:\n");
    for(int i=0; i<100; i++){
        printf("_%d_", i);
    }
    printf("\n");
    printf("----------------------------------------------\n");
    

    //Exercicio B
    printf("Exercicio B:\n");
    for(int i=20; i<=50; i++){
        if(i%2 == 0){ 
            printf("_%d_", i);
        }
    }
    printf("\n");
    printf("----------------------------------------------\n");

    //Exercicio C
    printf("Exercicio C:\n");
    for(int i=70; i>=25; i--){ 
        printf("_%d_", i);
    }
    printf("\n");
    printf("----------------------------------------------\n");

    //Exercico D
    printf("Exercicio D:\n");
    for(int i=25; i<=95; i++){
        if(i%2 != 0){
            printf("_%d_", i);
        }
    }
    printf("\n");
    printf("----------------------------------------------\n");

    //Exercico E
    printf("Exercicio E:\n");
    for(int i=0; i<15; i++){
        num = 1 + rand() % 10;
        soma = soma + num;
    }
    printf("Soma total = %d\n", soma);
    printf("Media = %d\n", soma/15);
    printf("----------------------------------------------\n");

    //Exercicio F
    printf("Exercicio F:\n");
    for(int i=0; i<10; i++){
        numF = 1 + rand() % 10;
        if(numF%2 != 0){
            impar++;
        }else if(numF%2 == 0){
            par++;
        }
    }
    printf("%d numero pares.\n%d numeros impares\n", par, impar);
    printf("----------------------------------------------\n");


    //Exercicio G
    printf("Exercicio G:\n");
    for(int i=0; i<10; i++){
        numG = -10 + rand() % 21;
        if(numG < 0){
            printf("O numero %d eh negativo\n", numG);
        }else if(numG > 0){
            printf("O numero %d eh positivo\n", numG);
        }else{
            printf("O numero %d eh nulo\n", numG);
        }
    }
    printf("----------------------------------------------\n");

    //Exercicio H
    printf("Exercicio H:\n");
    printf("Digite quantos numero deve ser lido:\n");
    scanf("%d", &quant);
    printf("Digite numeros aleatorio:\n");
    for(int i=0; i<quant; i++){
        scanf("%d", &numH);
        somaH = somaH + numH;
    }
    printf("soma: %d", somaH);



    return 0;
}