#include <stdio.h>
#include <string.h>

int main(){
    int num;    //numero da tabuada que o usuario escolher.
    int cont=1;   //contador para quando o usuario quiser fechar o programa.
    char continua;  //usado para ler se sim ou nao;

    while(cont == 1){
        printf("Digite qual tabuada queres:\n");
        scanf("%d", &num);

        printf("1x%d = %d\n", num, num*1);
        printf("2x%d = %d\n", num, num*2);
        printf("3x%d = %d\n", num, num*3);
        printf("4x%d = %d\n", num, num*4);
        printf("5x%d = %d\n", num, num*5);
        printf("6x%d = %d\n", num, num*6);
        printf("7x%d = %d\n", num, num*7);
        printf("8x%d = %d\n", num, num*8);
        printf("9x%d = %d\n", num, num*9);
        printf("10x%d = %d\n", num, num*10);
        printf("----------------------\n");
        printf("Deseja Outra tabuada? 's' para sim, e 'N' para nao:\n");
        scanf("%s", &continua);
        continua = toupper(continua);   //Para funcionar mesmo que o usuario digite em maiusculo ou minusculo.
        while(continua != 'S' && continua != 'N'){  
            printf("Digite uma opcao valida!\n");
            scanf("%s", &continua);
            continua = toupper(continua);   //Para funcionar mesmo que o usuario digite em maiusculo ou minusculo.
            
        }
        
        if(continua == 'N'){
            cont++; //contador que fecha o loop do while.
        }

    }


    return 0;
}