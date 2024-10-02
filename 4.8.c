#include <stdio.h>
#include <string.h>

int main(){
    int num, cont=0;
    char verific;


    while(cont == 0){
        int fat=1;
        printf("Digite um numero:\n");
        scanf("%d", &num);

        for(int i=num; i>0; i--){
            printf("%d\n", i);
            fat = fat*i;
        }
        printf("O fatorial de %d eh: %d\n", num, fat);
        printf("Deseja continuar? (s/n)\n");
        scanf("%s", &verific);
        verific = toupper(verific);

        while(verific != 'S' && verific != 'N'){  
            printf("Digite uma opcao valida!\n");
            scanf("%s", &verific);
            verific = toupper(verific);
        }

        if(verific == "N"){
            cont++;
        }else{
            continue;
        }
    }
    return 0;
}