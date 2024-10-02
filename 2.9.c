#include <stdio.h>

int main(){
    float preco;

    printf("Digite o valor:");
    scanf("%f", &preco);
    printf("Valor final: %.2f", (-preco)*0.15 + preco);

    return 0;
}