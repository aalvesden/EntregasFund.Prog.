#include <stdio.h>

int main(){
    float valorGasosa, moneyFree;

    printf("Quanto custa o litro da gasosa: ");
    scanf("%f", &valorGasosa);
    printf("Digite o valor disponivel para abastecer: ");
    scanf("%f", &moneyFree);
    printf("O valor digitado da para abastecer %.2f litros.", moneyFree/valorGasosa);

    return 0;
}