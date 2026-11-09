#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*Ex 1 
int main(){

    int ma=0, maior[4][4];

    for(int i=0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("Digite a posição %d %d: ", i, j);
            scanf("%d", &maior[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(maior[i][j]> 10){
                ma++;
            }
        }
    }
    printf("Maiores que 10:  %d\n ",ma );
}*/
/*Ex 2 
int main(){

    int i, j, matriz[5][5];
    
    printf("\n");
    for(i = 0;i<5;i++){
        for(j = 0;j<5;j++){
            if ( i == j){
                matriz[i][j] = 1;
                printf("%d ", matriz[i][j]);
            }else{
                printf("0 ");
            }
        }   
        printf("\n");
    }
}*/
/*Ex 3 (não entendi)
int main(){

int mat[4][4];

srand(time(NULL));

    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                mat[i][j] = rand () % 100;
                printf("%d ", mat[i][j]);
            }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                 mat[i][j] = i * j; 
                printf("%d ", mat[i][j]);     
            }
        printf("\n");
    }
}*/
/*Ex 4
int main(){

    int mat[4][4];

srand(time(NULL));

    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                mat[i][j] = rand () % 100;
                printf("%d ", mat[i][j]);
            }
        printf("\n");
    }
    printf("\n");

    int ma = mat[0][0];
    int li = 0, co = 0;

    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                if(mat[i][j] > ma){
                    ma = mat[i][j];
                    li = i;
                    co = j;
                }
            }
    }
    printf("Maior: %d\n", ma);
    printf("Posição %d %d\n", li, co);
}*/
/*Ex 5
int main(){

    int mat[5][5], x;

    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                printf("Digite a posição %d %d: ", i, j);
                scanf("%d", &mat[i][j]);
            }
    }
    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                printf("%d ", mat[i][j]);
            }
        printf("\n");
    }

    printf("\nDigite o número que quer encontrar: \n");
    scanf("%d", &x);

    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                if(x == mat[i][j]){
                    printf("Achou o valor na posição %d %d\n", i, j);
                }else{}
            }
    }
}  */
/*Ex 6
int main(){

    int mat1[4][4], mat2[4][4], matt[4][4];

    srand(time(NULL));

    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                mat1[i][j] = rand () % 100;
                printf("%d ", mat1[i][j]);
            }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                mat2[i][j] = rand () % 100;
                printf("%d ", mat2[i][j]);
            }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<4;i++){
            for(int j = 0;j<4;j++){
                if(mat1[i][j]>mat2[i][j]){
            mat1[i][j] = matt[i][j];
            printf("%d ", matt[i][j]);
                }else if(mat2[i][j] > mat1[i][j]){
                    matt[i][j] = mat2[i][j];
                    printf("%d ", matt[i][j]);
                }

            }
        printf("\n");
    }
}*/
/*Ex 7
int main(){

   int mat[10][10];
   srand(time(NULL));

   for(int i=0;i<10;i++){
            for(int j = 0;j<10;j++){
                mat[i][j] = rand () % 100;
                printf("%d ", mat[i][j]);
            }
        printf("\n");
   }
    printf("\n");
   for(int i=0;i<10;i++){
            for(int j = 0;j<10;j++){
                if(j > i){
                    mat[i][j] = 2 * i + 7 * j - 2;
                    printf("%d ", mat[i][j]);
                }else if(i > j){
                    mat[i][j] = 4 * (i * i * i) - 5 * (j * j);
                    printf("%d ", mat[i][j]);
                }else{
                    mat[i][j] = 3 * (i * i) - 1;
                    printf("%d ", mat[i][j]);
                }
            }
        printf("\n");
        
   }

}*/
/*Ex 8
int main(){

    int soma = 0, mat[3][3];

    srand(time(NULL));
    
    printf("Matriz inicial: \n\n");
    for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
                mat[i][j] = rand () % 10;
                printf("%d ", mat[i][j]);
            }
        printf("\n");
   }

    printf("\nAcima da diagonal principal: \n\n");
    for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(j > i){
                    soma += mat[i][j];
                    printf("%d ", mat[i][j]);
                }else{
                    printf("  ");
                }
            }
        printf("\n");
   }

   printf("Soma: %d\n\n", soma);
}*/
/*Ex 9
int main(){

    int soma = 0, mat[3][3];

    srand(time(NULL));
    
    printf("Matriz inicial: \n\n");
    for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
                mat[i][j] = rand () % 10;
                printf("%d ", mat[i][j]);
            }
        printf("\n");
   }

    printf("\nAbaixo da diagonal principal: \n\n");
    for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(i > j){
                    soma += mat[i][j];
                    printf("%d ", mat[i][j]);
                }else{
                    printf("  ");
                }
            }
        printf("\n");
   }

   printf("Soma: %d\n\n", soma);
}*/
/*Ex 10
int main(){

    int soma=0, mat[3][3];
    srand(time(NULL));

    printf("Matriz inicial: \n\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            mat[i][j] = rand () % 10;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal principal : \n\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            if(i == j){
                soma += mat[i][j];
                printf("%d ", mat[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nSoma: %d\n", soma);
}