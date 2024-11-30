#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1[5] = {1,5,9,2,5}, v2[5] = {7,4,13,21,6}, v3[5] = {8, -3,5,7,12};
    int matrix[3][5];

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            if(i==0){
                matrix[i][j]=v1[j];
            }else if(i == 1){
                matrix[i][j]=v2[j];
            }else{
                matrix[i][j]=v3[j];
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            matrix[i][j] = matrix[i][j]*7;
        }
        printf("\n");
    }




    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}