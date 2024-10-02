#include <stdio.h>


int main(){
    float valor, valorF;
    int repeticao, i=0;

    printf("Quantas vezes deseja cunsultar o valor:\n");
    scanf("%d", &repeticao);

    while(i<repeticao){

        printf("Valor do produto:\n");
        scanf("%f", &valor);
    
        if(valor < 20.00){
            valorF = valor + (valor*0.45) ;
        }else if(valor >=20.00 && valor < 50.00){
            valorF = valor+(valor*0.35);
        }else{
            valorF = valor+(valor*0.25);
        }

        printf("O valor de venda sera de: %.2f\n", valorF);
        i++;

    }

    return 0;
}