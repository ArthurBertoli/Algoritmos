//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int t; scanf("%d", &t);
    int matriz[t][t];
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    float ct = 0, sum = 0;
    float med;

    for(int i = 0; i < t; i++){
        for(int j = (i + 1); j < (t - (i + 1)); j++){
            // printf("matriz[%d][%d]:%d\n", i,j,matriz[i][j]);
            ct++;
            sum+= matriz[i][j];
        }
    }
    // printf("sum: %d\n", sum);
    // printf("ct: %d\n", ct);
    
    for(int i = (t-1); i >= 0; i--){
        // printf("i: %d\n", i);
        for(int j = (i-1); j > ((t-1)- i); j--){
            // printf("j: %d\n", j);
            ct++;
            sum+= matriz[i][j];
        }
    }

    med =(sum/ct);
    printf("%f\n", med);
    // printf("sum: %d\n", sum);
    // printf("ct: %d\n", ct);
}