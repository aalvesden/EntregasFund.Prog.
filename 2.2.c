#include <stdio.h>

int main(){
    float valorDollar = 5.64;
    float quantDollar;

    printf("Valor do dollar: %.2f\n", valorDollar);
    printf("Digite a quantia de dollars: ");
    scanf("%f", &quantDollar);

    printf("%.2f dollar fica %.2f reais.", quantDollar, quantDollar*valorDollar);

    return 0;
}