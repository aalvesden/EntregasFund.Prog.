#include <stdio.h>

int main(){
    int valorTab = 1500;
    int valorCell = 1000;
    int tab, cell;

    printf("Digite a respectivamente a quantia de tablet e de telefones vendidos: ");
    scanf("%d", &tab);
    scanf("%d", &cell);

    printf("A venda do dia foi de %d", (valorTab*tab)+(valorCell*cell));

    return 0;
}