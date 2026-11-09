#include <stdio.h>
#include <stdlib.h>

int main(){

    float contm=0, panual, anual, ma=0, mes[12][5] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 29, 29, 28, 26, 23, 22, 21, 21, 22, 24, 26, 27, 25, 25, 24, 21, 19, 18, 17, 17, 15, 14, 12, 13, 15, 17, 18, 19, 258, 234, 216, 122, 111, 98, 108, 98, 137, 173, 159, 208};
    //nao sei como inicializar matriz com numero float :/, quando a professora fizer a correção, me de um feedback de como fazer essa questão por favor. 
    

    scanf("%f", &mes[12][5]);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 5; j++){
            printf("\n", mes[i][j]);
        }
        printf("\n");
    }

    //a)

    for(int i = 0; i<12; i++){
        for(int j = 0; j < 1; j++){
            if(mes[i][j] > ma){
                ma = mes[i][j];
            }
        }
    }
    printf("O mes com maior temperatura é %d ", ma);
    //b)
    
    for(int i = 0; i <12; i++){
        for(int j = 4; j < 5; j++){
            anual += mes[i][j];
            panual = anual / 12;
            if(mes[i][j] < panual){
                printf("O mes %f, ficou abaixo da média anual de precipitação", m[i][j]);
            }
        }
    }
    
    



    printf("\n")

    return 0;

}