#include <stdio.h>

int main(){
    float a, b, c;

    printf("Digite os valores de A B e C\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a+b < a+c){
        printf("A + B = %.1f eh menor que A + C = %.1f", a+b, a+c);

        return 1;
    }else{
        printf("A + B = %.1f eh maior que A + C = %.1f", a+b, a+c);
    }

    return 0;
}