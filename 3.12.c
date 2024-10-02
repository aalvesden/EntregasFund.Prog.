#include <stdio.h>

int main(){
int idade;

    printf("Digite a idade do filisbino:\n");
    scanf("%d", &idade);


    if(idade >+ 5 && idade<= 7){
        printf("O filisbino esta na classificacao: Infantil A\n");
        return 1;
    }else if(idade >= 8 && idade <= 10){
        printf("O filisbino esta na classificacao: Infantil B\n");            
        return 1;
    }else if(idade >= 11 && idade <= 13){
         printf("O filisbino esta na classificacao: Juvenil A\n");
        return 1;
    }else if(idade >= 14 && idade <= 17){
        printf("O filisbino esta na classificacao: Juvenil B\n");
        return 1;
    }else{
        printf("O filisbino esta na classificacao: Senior\n");
        return 1;
    }

    return 0;
}