#include <stdio.h>

int main(){
    int num, max, min;

    printf("Quer verficar os numeros divisiveis por qual valor?\n");
    scanf("%d", &num);
    printf("Em qual intervalo de tempo? Digite o miinimo, em seguida o maximo:\n");
    scanf("%d", &min);
    scanf("%d", &max);

    for(int i=min; i<=max; i++){
        if(i%num == 0){
            printf("_%d_", i);
        }
    }

    return 0;
}