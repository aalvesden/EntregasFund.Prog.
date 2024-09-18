#include <stdio.h>

int main(){
    float Ga, Gb;

    printf("Digite a nota do Ga: ");
    scanf("%f", &Ga);
    printf("Digite a nota do Gb: ");
    scanf("%f", &Gb);

    printf("A media do aluno ficou em %.2f", (Ga+Gb)/3)
    printf("%.2f", Ga*(1/3) + Gb*(2/3));


    return 0;
}