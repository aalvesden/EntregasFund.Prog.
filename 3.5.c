#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, aux=1;

    while(aux == 1){
        printf("Digite um numero:\n");
        scanf("%d", &num);
        if(num % 2 == 0){
            printf("O numero %d eh par :)\n", num);
        }else{
            printf("O numero %d eh impar :)\n", num);
        }
        printf("Deseja continuar?\n1 - Sim;\n2 - Nao;\n");
        scanf("%d", &aux);
        system("cls");
    }
    
    return 0;
}