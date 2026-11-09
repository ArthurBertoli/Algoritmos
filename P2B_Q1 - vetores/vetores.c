#include <stdio.h>
#include <stdlib.h>
//Aluno: Arthur Bertoli Silva

int main()
{
    float valorOut [10], loja1 [10], loja2[10], dif, resto;

          valorOut [0] = 200;
          valorOut [1] = 500;
          valorOut [2] = 50;
          valorOut [3] = 30;
          valorOut [4] = 1000;
          valorOut [5] = 200;
          valorOut [6] = 600;
          valorOut [7] = 350;
          valorOut [8] = 1000;
          valorOut [9] = 2000;

    for (int i = 0; i < 10; i++){

          loja1 [0] = 150;
          loja1 [1] = 490;
          loja1 [2] = 50;
          loja1 [3] = 3;
          loja1 [4] = 900;
          loja1 [5] = 180;
          loja1 [6] = 550;
          loja1 [7] = 300;
          loja1 [8] = 750;
          loja1 [9] = 1800;

        dif = loja1[i] / valorOut[i];
        resto = dif * 100;
        printf("Produto na posição %d, na loja 1 baixou: %% %.2f \n", i, resto);
    }

    for (int p = 0; p < 10; p++){

          loja2 [0] = 100;
          loja2 [1] = 290;
          loja2 [2] = 25;
          loja2 [3] = 10;
          loja2 [4] = 1000;
          loja2 [5] = 280;
          loja2 [6] = 500;
          loja2 [7] = 200;
          loja2 [8] = 550;
          loja2 [9] = 2100;

        dif = loja2[p] / valorOut[p];
        resto = dif * 100;
        if(dif > 1){
            printf("\nProduto na posição %d, na loja 2 subiu: %% %.2f ", p, resto);
        }
        printf("\nProduto na posição %d, na loja 2 baixou %% %.2f", p, resto);
    }

    return 0;
}
