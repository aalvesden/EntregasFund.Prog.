#include <stdio.h>

int main(){
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num>0){
        printf("O dobro de %.1f eh %.1f", num, num*2);

        return 1;
    }else {
        printf("O triplo de %.1f eh %.1f", num, num*3);
    }
    return 0;

}