#include <stdio.h>

int main(){
    float valorKG = 40.00;
    float peso;

    printf("Digite o peso do prato em Kg: ");
    scanf("%f", &peso);
    printf("O prato de %.2fKg ficou no valor de %.2f", peso, peso*valorKG);

    return 0; 
}