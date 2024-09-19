#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num % 3 == 0){
        printf("%d eh divisivel por 3", num);
        return 0;
    }else{
        printf("%d nao eh divisivel por 3", num);
    }

    return -1;
}