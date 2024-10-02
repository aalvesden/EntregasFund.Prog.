#include <stdio.h>
#include <string.h>

int main(){
    float ga, gb, gc, media;
    char troca;

    printf("Digite a nota do Grau A:\n");
    scanf("%f", &ga);
    printf("Digite a nota do Grau B:\n");
    scanf("%f", &gb);

    media= (ga+(2*gb))/3;

    if(media >= 7){
        printf("Parabens voce esta aprovado!\n");
    
    }else{
        printf("Voce nao atingiu a media\n");
        printf("Digite a nota do grau C:\n");
        scanf("%f", &gc);        
        printf("Deseja subistituir qual nota? A ou B?\n");
        scanf("%s", &troca);
        troca = toupper(troca);
    }

    if(troca == 'A'){
        media = (gc+(gb*2))/3;
        if(media < 7){
            printf("Voce reprovou!\n");
        }else{
            printf("Voce esta aprovado\n");
        }
    }else if(troca == 'B'){
        media = gc+ga;
        if(media < 7){
            printf("Voce reprovou!\n");
        }else{
            printf("Voce esta aprovado\n");
        }
    }
    printf("Sua media: %.2f\n", media);
    printf("media da Unisinos: 7\n");

    
    return 0;
}