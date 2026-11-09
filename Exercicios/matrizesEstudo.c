#include <stdlib.h>
#include <stdio.h>

//matrizes- array multidimensional
//char[3][50]

/*int main(){

    char nome[3][50];

    for(int i = 0; i<3; i++){
        printf("Qual seu nome? ");
        fgets(nome[i], 50, stdin);
    }
    for(int i = 0; i<3;i++){
        printf("Olá %s\n", nome[i]);
    }
}*/

int main(){

    int num[2][2];
    num[0][0]=1;
    num[0][1]=2;
    num[1][0]=3;
    num[1][1]=4;

    for(int i=0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("num [%d][%d] %d\n",i, j, num[i][j]);
        }

    }
}