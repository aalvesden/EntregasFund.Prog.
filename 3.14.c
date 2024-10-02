#include <stdio.h>
#define V_INICIAL 300

int main(){
    int children, young, meiaIdade, old;
    float valor;

    printf("Quantas criancas com menos de 10 anos:\n");
    scanf("%d", &children);
    printf("Quantas pessoas entre 10 e 30 anos:\n");
    scanf("%d", &young);
    printf("Quantas pessoas entre 31 e 60 anos:\n");
    scanf("%d", &meiaIdade);
    printf("Quantas pessoas com mais de 60 anos:\n");
    scanf("%d", &old);

    valor = V_INICIAL + (children*100) + (young*220) + (meiaIdade*395) + (old*480);

    printf("Valor final da tarifa: %.2f\n", valor);
    return 0;
}