#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int faces, num;

    srand(time(0));

    for(int i=0; i<6; i++){

        printf("Dado de quantas faces:\n");
        scanf("%d", &faces);
        switch (faces){
            case 4:
                num = 1 + rand() % 4;
                printf("resultado: %d\n", num);
                break;
            case 6:
                num = 1 + rand() % 6;
                printf("resultado: %d\n", num);
                break;
            case 8:
                num = 1 + rand() % 8;
                printf("resultado: %d\n", num);
                break;
            case 10:
                num = 1 + rand() % 10;
                printf("resultado: %d\n", num);
                break;
            case 12:
                num = 1 + rand() % 12;
                printf("resultado: %d\n", num);
                break;
            case 16:
                num = 1 + rand() % 16;
                printf("resultado: %d\n", num);
                break;
        }

    }
    return 0;
}
