#include <stdio.h>

int main(){
    int matrix[4][4];
    int count = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j == count){
            matrix[i][j] = 1;
            }else{
                matrix[i][j] = 0;
            }
        }
        count++;
        printf("\n");
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}