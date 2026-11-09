//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int ma=0, cont=0;
    int user0=0, user1=0, user2=0, user3=0, user4=0, user5=0, user6=0, user7=0, user8=0, user9=0;
    int mat[10][10]={
    {0,1,1,0,0,0,0,0,0,0},

    {1,0,1,1,0,0,0,0,0,0},

    {1,1,0,1,0,0,0,0,0,0},

    {0,1,1,0,1,0,1,0,0,0},

    {0,0,0,1,0,1,0,0,0,0},

    {0,0,0,0,1,0,1,1,0,0},

    {0,0,0,1,0,1,0,0,1,0},

    {0,0,0,0,0,1,0,0,1,0},

    {0,0,0,0,0,0,1,1,0,1},

    {0,0,0,0,0,0,0,0,1,0}};

    //matriz
    for(int i=0;i<10;i++){
            for(int j = 0;j<10;j++){
                printf("%d ", mat[i][j]);
            }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<10;i++){
            for(int j = 0;j<1;j++){
                if(mat[i][0] == 1){
                    user0++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 1;j<2;j++){
                if(mat[i][1] == 1){
                    user1++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 2;j<3;j++){
                if(mat[i][2] == 1){
                    user2++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 3;j<4;j++){
                if(mat[i][3] == 1){
                    user3++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 5;j<6;j++){
                if(mat[i][4] == 1){
                    user4++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 6;j<7;j++){
                if(mat[i][5] == 1){
                    user5++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j =7;j<8;j++){
                if(mat[i][6] == 1){
                    user6++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 8;j<9;j++){
                if(mat[i][7] == 1){
                    user7++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 9;j<10;j++){
                if(mat[i][8] == 1){
                    user8++;
                }
            }
    }
    for(int i=0;i<10;i++){
            for(int j = 10;j<=10;j++){
                if(mat[i][9] == 1){
                    user9++;
                }
            }
    }
    
    if(user0 > ma){
        ma = user0;
    }if(user1 > user0){
        ma = user1;
    }if(user2 > user1){
        ma = user2;
    }if(user3 > user2){
        ma = user3;
    }if(user4 > user3){
        ma = user4;
    }if(user5 > user4){
        ma = user5;
    }if(user6 > user5){
        ma = user6;
    }if(user7 > user6){
        ma = user7;
    }if(user8 > user7){
        ma = user8;
    }if(user9 > user8){
        ma = user9;
    }

    
    //a)
    printf("\nUser 0: %d\n", user0);
    printf("User 1: %d\n", user1);
    printf("User 2: %d\n", user2);
    printf("User 3: %d\n", user3);
    printf("User 4: %d\n", user4);
    printf("User 5: %d\n", user5);
    printf("User 6: %d\n", user6);
    printf("User 7: %d\n", user7);
    printf("User 8: %d\n", user8);
    printf("User 9: %d\n", user9);

    //b)
    printf("\nUsuário com mais amigos: %d\n", ma);

    //c)
    for(int i = 0; i < 10; i ++){
        if( i == 3){
            continue;
        }
        for(int j = 0; j < 10; j++){
            if(mat[3][j] == 1 & mat[i][j] == 1){
                cont++;
            }
        }
        printf("\nO usuário 3 e o usuário %d tem %d amigos em comum",i, cont);
        cont = 0;
    }
    printf("\n");
    return 0;
}