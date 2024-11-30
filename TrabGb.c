#include <stdio.h>
#include <string.h>
//#include "header.h"

typedef struct{
    char nome[20];  //Armazena nome do produto
    int quant;      //Armazenar quantidade em estoque
    char unit[2];   //usada para armazenar a unidade de medida ex: gramas (g), volume (ml)...
}insumos;

typedef struct{
    char nome[30];  //Armazena nome do produto
    int quant[10];      //Armazenar quantidade em estoque
    char unit[2];   //usada para armazenar a unidade de medida ex: gramas (g), volume (ml)...
}insumosPocao;

void menu(char texto[]){    //Esta função tem como objetico imprimir as strings no primeiro menu. Função ultilizadas nas linhas 92 a 95.
    printf("%s\n", texto);
}

void printEstoque(char nome[], int quant, char unit[2]){    //função criada para imprimir o estoque atual a partir de um laço "for". Utilizada da linha 100 a 103.
    printf("%s: %d %s\n", nome, quant, unit);
}

int main(){
    int prepMenu;
    int menuRepo;
    int repo;

    insumos estoque[7];     //A partir da linha 30 a linha 57 esta o armazenamento do estoque inicial, cujo pode ser alterado facilmente.
    strcpy(estoque[0].nome, "Po de fenix");
    estoque[0].quant = 100;
    strcpy(estoque[0].unit, "g");       //variavel estoque[i].unit foi criada para conseguir imprimir o estoque a partir de um for no qual imprimi a unidade de medida de cada insumo
    strcpy(estoque[1].nome, "Essencia celestial");
    estoque[1].quant = 50;
    strcpy(estoque[1].unit, "ml");

    strcpy(estoque[2].nome, "Raiz de dragao");
    estoque[2].quant = 45;
    strcpy(estoque[2].unit, "g");

    strcpy(estoque[3].nome, "Orvalho lunar");
    estoque[3].quant = 30;
    strcpy(estoque[3].unit, "ml");

    strcpy(estoque[4].nome, "flores secas");
    estoque[4].quant = 200;
    strcpy(estoque[4].unit, "g");

    strcpy(estoque[5].nome, "Elixir amargo");
    estoque[5].quant = 20;
    strcpy(estoque[5].unit, "ml");

    strcpy(estoque[6].nome, "Lagrimas de unicornio");
    estoque[6].quant = 15;
    strcpy(estoque[6].unit, "ml");

    insumosPocao pocao[5];          //Da linha 58 a linha 81 foi determinada a quantia necessaria de materia prima para produzir cada poção
    strcpy(pocao[0].nome, "Pocao de cura");
    pocao[0].quant[0] = 30; //Pó de fênix
    pocao[0].quant[1] = 20; //essência celestial
    pocao[0].quant[2] = 20; //flores secas
    pocao[0].quant[3] = 10; //lágrimas de unicórnio

    strcpy(pocao[1].nome, "Pocao forca da floresta");
    pocao[1].quant[0] = 20; //Orvalho lunar
    pocao[1].quant[1] = 30; //Raiz de dragao
    pocao[1].quant[2] = 30; //flores secas
    
    strcpy(pocao[2].nome, "Pocao sabedoria da riqueza");
    pocao[2].quant[0] = 30; //essência celestial
    pocao[2].quant[1] = 50; //Pó de fenix
   
   strcpy(pocao[3].nome, "Pocao sorte no amor");
    pocao[3].quant[0] = 10; //Orvalho lunar
    pocao[3].quant[1] = 50; //Flores secas
    pocao[3].quant[2] = 5; //lágrimas de unicórnio

    strcpy(pocao[4].nome, "Pocao malvada");
    pocao[4].quant[0] = 10; //Elixir amargo
    pocao[4].quant[1] = 15; //raiz de dragão
 
    int opcao = 0;
    do{     //do- while (condição para fechar o programa)
        menu("1 - Consultar ingredientes disponiveis");
        menu("2 - preparar pocao");
        menu("3 - Reabastecer ingrediente");
        menu("4 - Sair do programa");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                for(int i=0; i<7; i++){
                    printEstoque(estoque[i].nome, estoque[i].quant, estoque[i].unit);

                }
                break;
            
            case 2:
                printf("Qual pocao deseja prepara?\n");
                for(int i=0; i<5; i++){
                    printf("%d - %s\n", i+1, pocao[i].nome);
                }
                scanf("%d", &prepMenu);
                switch(prepMenu){   //desvio de fluxo switch usado para verificar se ha insumos necessarios para cada tipo de poção (cada case referece a uma poção) 
                    case 1: //Poção de cura
                        if (pocao[0].quant[0] > estoque[0].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[0].nome, pocao[0].quant[0]-estoque[0].quant);
                        }
                        if (pocao[0].quant[1] > estoque[1].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[1].nome, pocao[0].quant[1]-estoque[1].quant);
                        }
                        if (pocao[0].quant[2] > estoque[4].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[4].nome, pocao[0].quant[2]-estoque[4].quant);
                        }
                        if (pocao[0].quant[3] > estoque[6].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[6].nome, pocao[0].quant[3]-estoque[6].quant);
                        }
                        break;
                    case 2: //Poção força da floresta
                        if (pocao[1].quant[0] > estoque[3].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[3].nome, pocao[1].quant[0]-estoque[3].quant);
                        }
                        if (pocao[1].quant[1] > estoque[2].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[2].nome, pocao[1].quant[1]-estoque[2].quant);
                        }
                        if (pocao[1].quant[2] > estoque[4].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[4].nome, pocao[0].quant[2]-estoque[4].quant);
                        }
                        break;
                    case 3: //Poção sabedoria da riqueza
                        if (pocao[2].quant[0] > estoque[1].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[1].nome, pocao[2].quant[0]-estoque[1].quant);
                        }
                        if (pocao[2].quant[1] > estoque[0].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[0].nome, pocao[2].quant[1]-estoque[0].quant);
                        }
                        break;
                    case 4: //Poção sorte no amor
                        if (pocao[3].quant[0] > estoque[3].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[3].nome, pocao[3].quant[0]-estoque[3].quant);
                        }
                        if (pocao[3].quant[1] > estoque[4].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[4].nome, pocao[3].quant[1]-estoque[4].quant);
                        }
                        if (pocao[3].quant[2] > estoque[6].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[6].nome, pocao[3].quant[2]-estoque[6].quant);
                        }
                        break;
                    case 5: //Poção malvada
                        if (pocao[4].quant[0] > estoque[5].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[5].nome, pocao[4].quant[0]-estoque[5].quant);
                        }
                        if (pocao[4].quant[1] > estoque[2].quant){
                            printf("Item %s esta em falta, faltam %d g\n", estoque[2].nome, pocao[4].quant[1]-estoque[2].quant);
                        }
                        break;
                    
                }
                break;
            case 3:
                printf("Qual ingrediente deseja repor?\n"); //Da linha 162 a 165 é usado um laço para perguntar qual insumo queres atualizar no estoque
                for(int i=0; i<7; i++){
                    printf("%d - %s\n", i+1, estoque[i].nome);
                }
                scanf("%d", &menuRepo);
                printf("Quanto de %s deseja adicionar?\n", estoque[menuRepo-1].nome);
                scanf("%d", &repo);
                estoque[menuRepo-1].quant += repo;
                printf("Estoque atual de %s: %d %s\n", estoque[menuRepo-1].nome, estoque[menuRepo-1].quant, estoque[menuRepo-1].unit);
                break;
            
        

        }
        
        system("pause");        //função usado para limpar o terminal de saida
        system("cls");
    }while(opcao != 4);        //Condição para fechar o programa


    

    return 0;
}

    
