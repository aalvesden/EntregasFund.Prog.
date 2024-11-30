#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5];

    for(int i = 0; i<5; i++){
        scanf("%d", vet[i]);
        printf("Vet[%d] = %d;\n", i, vet[i]*i);
    }
    for(int i = 0; i<5; i++){
        printf("Vet[%d] = %d;\n", i, vet[i]*i);
    }

    return 0;
}