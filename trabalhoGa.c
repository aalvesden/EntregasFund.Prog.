
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int populacao, crescimento, ciclos, aux=1, num;

    srand(time(0));

    printf("Escolha uma opcao:\n");
    printf("1 - Fazer nova simulacao.\n");
    printf("2 - Sair do programa.\n");
    scanf("%d", &aux);

    system("cls");
    
    while(aux == 1){
        printf("Quantas bacterias ha na populacao:\n");
        scanf("%d", &populacao);
        printf("Digite a taxa de crescimento da populacao:\n");
        scanf("%d", &crescimento);
        printf("Quantos ciclos de crescimento havera?\n");
        scanf("%d", &ciclos);

        for(int i=0; i<ciclos; i++){
            num = 1 + rand() % 100;

            if(num <= 5){   //probabilidade de 5%.
                populacao = populacao - (populacao * 0.5);
                printf("Ciclo %d: %d     (Condicao adiversa: Radiacao ultravioleta)\n", i+1, populacao);
            }else if(num >5 && num <= 15){ // probabilidade de 10%
                populacao = populacao + (populacao * 0.2);
                printf("Ciclo %d: %d     (Condicao adiversa: Condicao favoravel :)\n", i+1, populacao);
            }else if(num > 15 && num <= 25){    //probabilidade de 10%
                populacao = populacao - (populacao * 0.2);
                printf("Ciclo %d: %d     (Condicao adiversa: Exesso de umidade)\n", i+1, populacao);
            }else if (num > 25 && num <= 40){   //probabilidade de 15%
                populacao = populacao - (populacao * 0.25);
                printf("Ciclo %d: %d     (Condicao adiversa: Falta de nutrientes)\n", i+1, populacao);
            }else if(num > 40 && num <= 60){    // probabilidade de 20%
                populacao = populacao - (populacao * 0.3);
                printf("Ciclo %d: %d     (Condicao adiversa: Alta temperatura)\n", i+1, populacao);
            }else if (num > 60 && num <= 100){  // probabilidade de não haver condições adiversas.
                populacao = populacao + (populacao * crescimento)/100;
                printf("Ciclo %d: %d\n", i+1, populacao);
            } 
        }

        printf("\n\n");
        printf("-------Simulacao concluida-------\n");
        printf("Populacao final: %d\n", populacao);
        printf("\n");

        system("pause");    //pausa o programa, para o usuario ler as informações dadas pelo programa.
        system("cls");      //limpa a tela de saida, para começar uma nova simulação.
        

        printf("Escolha uma opcao:\n");
        printf("1 - Fazer nova simulacao.\n");
        printf("2 - Sair do programa.\n");
        scanf("%d", &aux);

        
    }



    return 0;
}