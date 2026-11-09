//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int primo(int n){

    int divi = 0;
    for(int i = 2; i < n; i++){
        // printf("res:%d\n", (n % i));
        if(divi == 1){
            return 0;
        }else if( n % i == 0){
            divi++;
        }
    }
        return 1;

}

int main(){

    int m, p = 0;
    scanf("%d", &m);

    for(int i = (m - 1); i != 0 ; i--){
        // printf("%d\n", i);

        // printf("%d\n", primo(i));
        if(primo(i) == 1){
            p = i;
            break;
        }
    }
    if(p == 0 || p == 1){
        printf("Não tem primos\n");
    }else{
        printf("%d\n", p );
    }
    return 0;

}










