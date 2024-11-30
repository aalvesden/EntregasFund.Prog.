#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vet[10], vetCopy[10], vetPar[10], vetImpar[10];
    int cinquenta = 0;
    int media = 0;
    int maior, menor, soma = 0, produto = 0;

    srand(time(0));

    //a)
    printf("Questao a)-----\n");
    for(int i = 0; i<10; i++){
        vet[i] = 10 + rand() % 90;
        printf("vet[%d] = %d;\n", i, vet[i]);
    }
    printf("\n\n");

    //b) e c)
    printf("Questao b) e c)-----\n");
    for(int i=0; i<10; i++){
        if(vet[i] == 50){
            printf("numero cinquenta encontrado: %d;\n", i);
            cinquenta++;
        }
    }
    printf("%d vetores tiveram o valor 50;\n", cinquenta);
    printf("\n\n");

    //d)
    printf("Questao d)-----\n");
    for(int i=0; i<10; i++){
        media+= vet[i];
    }
    media = media/10;
    printf("media = %d\n", media);
    printf("\n\n");

    //e)
    printf("Questao e)-----\n");
    maior= vet[0];
    menor = vet[0];
    for(int i= 0; i<10; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }else if(vet[i] < menor){
            menor = vet[i];
        } 
    }
    printf("maior = %d;\n", maior);
    printf("menor = %d;\n", menor);
    printf("\n\n");
    

    //f)
    produto = vet[0];
    printf("Questao f)-----\n");
    for(int i=0; i<10; i++){
        soma += vet[i];
        produto = produto* vet[i+1]; 
    }
    printf("soma = %d;\n", soma);
    printf("produto = %d;\n", produto);
    printf("\n\n");

    //g)
    printf("Questao g)-----\n");
    for(int i = 9; i>=0; i--){
        printf("vet[%d] = %d;\n", i, vet[i]);
    }
    printf("\n\n");

    //h)
    printf("Questao h)-----\n");
    int j=0;
    for(int i=9; i>=0; i--){
        vetCopy[j] = vet[i];
        printf("vetCopy[%d] = %d;\n", j, vetCopy[j]);
        j++;
    }
    printf("\n\n");

    //i)
    printf("Questao i)-----\n");
    for(int i=0; i<10; i++){
        if(vet[i] % 2 == 0){
            vetPar[i] = vet[i];
            printf("vetPar[%d] = %d;\n", i, vetPar[i]);
        }else{
            vetImpar[i] = vet[i];
            printf("vetImpar[%d] = %d;\n", i, vetImpar[i]);
            
        }
    }
}