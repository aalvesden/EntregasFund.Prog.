#include <stdio.h>

int main(){
    float celsius;

    printf("Digite a temperatura em celcius: ");
    scanf("%f", &celsius);

    printf("%.2f em graus fahrenheit: %.2f", celsius, celsius*1.8 +32);

    return 0;
}