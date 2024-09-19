#include <stdio.h>

int main(){
    float num, divisor;

    printf("Digite os numeros a dividir:\n");
    scanf("%f", &num);
    scanf("%f", &divisor);

    if(divisor==0){
        printf("A operacao nao foi efetuada divisor invalido");

        return -1;
    }else{
        printf("%.1f", num/divisor);
    }

    return 0;


}
