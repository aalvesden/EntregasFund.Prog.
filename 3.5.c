#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("%d eh um numero par", num);

        return 2;
    }else{ 
        printf("%d eh numero impar", num);
    }
    return 1;
}

