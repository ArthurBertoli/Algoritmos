#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

//Strings
 
/* Basicao:
    int main(){

        char palavra[50] = {"\nopa bao? (me da ponto extra prof rsrs)\n"};
        int tam;

        //printf("Digite seu nome: ");
        //scanf("%50[^\n] ", palavra) bem ruim usar esse;
        //(gets não é seguro)
        //    vetor/tamanho/stdin(teclado)
        //fgets(palavra,50,stdin);//file  

        tam = strlen(palavra);
       

        printf("tamanho : %d ", tam);

    }*/


    int main(){
        
        
        char palavra[50] = {"abacate"};
        char palavra2[50] = {"bola"};

        /*concatenar 2 strings
        strcat(palavra, "bao?");
        printf("\n\t%s\n", palavra);*/

        //comparar 2 string
        // se as strings forem iguais, o resultado sera 0
        printf("\nResultado %d\n", strcmp(palavra, palavra2));
    }