#include <stdio.h>

int main(){
    int camisa, calca, cinto;
    float valCamisa = 25.00, valCalca = 100.00, valCinto = 40.00, valorFinal;
    

    printf("Camisetas: ");
    scanf("%d", &camisa);
    printf("calca: ");
    scanf("%d", &calca);
    printf("cinto: ", &cinto);
    scanf("%d", &cinto);

    valorFinal = (camisa*valCamisa)+(calca*valCalca)+(cinto*valCinto);

    printf("O total da compra deu %.1f aplicando o desconto fica %.1f ", valorFinal, (-valorFinal*0.1) +valorFinal);


    return 0;
}