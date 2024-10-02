#include <stdio.h>
#define DESCONTO_MAX 318.20

int main(){
    float salario;

    printf("Digite o salario:\n");
    scanf("%f", &salario);

    if(salario*0.11 >= DESCONTO_MAX){
        printf("O desconto sera de %.2fR$", DESCONTO_MAX);
    }else{
        printf("O desconto sera de %.2fR$", salario*0.11);
    }

}