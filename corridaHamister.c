#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int h_um=0, h_dois=0;       //armazena a posição de cada hamister.
    int first, second;  //variavel usada para sortear em cada rodada.
    int win=0;  //variavel usada para finalizar o loop do while.
    int i=1;    // variavel para imprimir o numero de cada rodada, usado na linha 54.
    srand(time(0));


    //laço usado sómene para o hamister numero 1.
    while(win == 0){    
        first = 1 + rand() % 5; //sorteio da jogada do hamister 1.


        if(first == 1){
            h_um = h_um +1;
        }else if(first == 2){
            h_um = h_um +2;
        }else if(first == 3){
            h_um = h_um + 0;
        }else if(first == 4){
            h_um = h_um -1;
        }else if(first == 5){
            h_um = h_um -2;
        }

        //Este "if" garante que a posição do hamister 1 não seja menor que zero.
        if(h_um <0){
            h_um = 0;
        }
        

        second = 1 + rand() % 5;    //sorteio da jogada do hamister 2.

        if(second == 1){
            h_dois+=1;
        }else if(second == 2){
            h_dois+=2;
        }else if(second == 3){
            continue;
        }else if(second == 4){
            h_dois-=1;
        }else if(second == 5){
            h_dois-= 2;
        }

        //Este "if" garante que a posição do hamister 2 não seja menor que zero.
        if(h_dois <0){
            h_dois = 0;
        }

        
        printf("--------Rodada %d--------\n", i);
        i++;
        for(int j=0; j<h_um; j++){
            printf("* ");
        }
        printf("    Hamister numero 1\n");
        for(int k=0; k<h_dois; k++){
            printf("# ");
        }
        printf("    Hamister numero 2\n");
        printf("\n");

        if(h_um >= 12 && h_dois >= 12){
            printf("Houve um empate.");
            win++;
        }else if(h_um >= 12){
            printf("Hamister numero 1 eh o ganhador :)\n");
            win++;
        }else if(h_dois >= 12){
            printf("Hamister numero dois eh o ganhador :)\n");
            win++;  //finaliza o loop;
        }

        
    }
    return 0;
}