#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matrix[4][6];
    int a=0, b=0, c=0, d=0, e=0;

    srand(time(0));

    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            matrix[i][j] = -10 + rand() % (10-(-10)+1);
        }
    }
    
    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Questão a
    for(int j=0; j<6; j++){
        a+=matrix[1][j];
    }
    printf("Questao a: %d\n", a);

    //Questão b
    for(int i=0; i<4; i++){
        b+=matrix[i][4];
    }
    printf("Questao b: %d\n", b);

    //Questão c
    for(int j=0; j<6; j++){
        c+= matrix[0][j]*matrix[3][j];
    }
    printf("Questao c: %d\n", c);

    //Questão d
    for(int i=0; i<4; i++){
        for(int j=2; j<6; j=j+2){
            d+= matrix[i][j];
        }
    }
    printf("Questao d: %d\n", d);

    //Questão e
    for(int i=1; i<4; i=i+2){
        for(int j=2; j<6; j++){
            e+= matrix[i][j];
        }
    }
    printf("Questao e: %d\n", e);

    //Questão 5
    int maior = matrix[0][0];
    int menor = matrix[0][0];

    for(int i=0; i<4; i++){
        for(int j=0; j<6; j++){
            if(maior < matrix[i][j]){
                maior=matrix[i][j];
            }else if(menor > matrix[i][j]){
                menor = matrix[i][j];
            }
        }
    }
    printf("Maior: %d\nMenor: %d", maior, menor);

    return 0;
}