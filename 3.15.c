#include <stdio.h>

int main(){
    float valor;
    int pag;

    printf("Digite o valor da compra:\n");
    scanf("%f", &valor);
    printf("Escolha uma forma de pagamento:\n\n");
    printf("1 - a vista em dinheiro (15 por cento de desconto0\n");
    printf("2 - a vista no cartao (10 por cento de desconto)\n");
    printf("3 - em duas vezes no cartao (sem juros)\n");
    printf("4 - em tres vezes (preco etiquetado mais juros de 10 por cento)\n");
    scanf("%d", &pag);

    switch (pag){
        case 1:
            printf("Valor final da compra: %.2fR$", valor-(valor*0.15));
            break;
        case 2:
            printf("Valor final da compra: %.2fR$", valor-(valor*0.1));
            break;
        case 3:
            printf("Valor final da compra: %.2fR$", valor);
            break;
        case 4:
            printf("Valor final da compra: %.2fR$", valor+(valor*0.1));
            break;

    }


    return 0;
}