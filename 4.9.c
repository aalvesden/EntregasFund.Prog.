#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    char caracter;

    printf("Digite o numero de linhas:\n");
    scanf("%d", &num);
    printf("Digite um caractere:\n");
    scanf(" %c", &caracter);

    for(int i=0; i<num; i++){
        for(int j=num; j>i; j--){        
            printf("%c", caracter);
        }
         printf("\n");
    }

    for(int m=0; m<=num; m++){
        for(int j=0; j<m; j++){
            printf("%c", caracter);
        }
        printf("\n");
    }

    return 0;
}