#include <stdio.h>

int main(){
    int escolha;
    float euro, dollar, real, quant;

    printf("Digite a cotacao do euro:\n");  //valor do euro= 6.09
    scanf("%f", &euro);
    printf("Digite a cotacao do dollar:\n");    //valor do dollar= 5.48
    scanf("%f", &dollar);
    printf("Digite a cotacao do real:\n");  //valor do real= 1
    scanf("%f", &real);

    for(int i= 0; i<3; i++){

        printf("Escolha a operacao:\n");
        //opcoes
        printf("1 - converter de real para euro.\n");
        printf("2 - converter de real para dollar.\n");
        printf("3 - converter de euro para dollar.\n");
        printf("4 - converter de euro para real.\n");
        printf("5 - converter de dollar para euro.\n");
        printf("6 - converter de dollar para real.\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                printf("digite a quantia em real:\n");
                scanf("%f", &quant);
                printf("%.2f euros\n", quant*euro);
                break;
            case 2:
                printf("digite a quantia em real:\n");
                scanf("%f", &quant);
                printf("%.2f dollars\n", quant*dollar);
                break;
            case 3:
                printf("digite a quantia em euro:\n");
                scanf("%f", &quant);
                printf("%.2f dollars\n", quant*(euro/dollar));
                break;
            case 4:
                printf("digite a quantia em euro:\n");
                scanf("%f", &quant);
                printf("%.2f real\n", quant*euro);
                break;
            case 5:
                printf("digite a quantia em dollar:\n");
                scanf("%f", &quant);
                printf("%.2f euro\n", quant*(dollar/euro));
                break;
            case 6:
                printf("digite a quantia em dollar:\n");
                scanf("%f", &quant);
                printf("%.2f real\n", quant*dollar);
                break;
        

        }
    }
    
    return 0;
}