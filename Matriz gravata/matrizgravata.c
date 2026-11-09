//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{

    int dimensao = 12;
    int mat[dimensao][dimensao];

    srand(time(NULL));
    printf("\n");
    // impressao da matriz
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            mat[i][j] = rand() % 10;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // trabalhando a diagonal principal:
    int ma = mat[0][0];
    for (int i = 0; i < dimensao; i++){
        for (int j = 0; j < dimensao; j++){
            if (i >= j || j + 1 >= dimensao - i){
                if (i > j && j + 1 > dimensao - i){
                    printf(" ");
                }
                else{
                    printf("%d", mat[i][j]);
                    if (mat[i][j] > ma){
                        ma = mat[i][j];
                    }
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Maior elemento: %d\n", ma);
    return 0;
}