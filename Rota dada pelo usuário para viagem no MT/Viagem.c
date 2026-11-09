//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos
#include<stdio.h>
#include<stdlib.h>
#define L 6
int main(){
    int mapa[L][L]=
        {{0, 63, 210,190,0,190},
        {63,0,160,150,95,0},
        {210,160,0,10,0,0},
        {190,150,10,0,0,0},
        {0,95,0,0,0,80},
        {190,0,0,0,80,0}};
    int n; scanf("%d", &n);
    int dist = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < n; i++){
        if(mapa[arr[i]][arr[i-1]] == 0){
            printf("Não é possivel fazer essa rota\n");
            return 0;
        }
        dist += mapa[arr[i]][arr[i-1]];
    }
    printf("%dkm\n", dist);
    
return 0;
}