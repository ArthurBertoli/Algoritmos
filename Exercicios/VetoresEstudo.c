#include <stdio.h>
#include <stdlib.h>

//Vetores:
int main(){

    //string
    char nome[50];
    printf("Qual seu nome? ");
    fgets(nome, 50, stdin);
    printf("Olá %s", nome);

    //caracteres
    char letras[26];
    int contador = 0;
    for(int i = 97; i <=122; i++){
        letras[contador] = i;
        contador = contador + 1;    
    }
    for(int i = 0; i <26; i++){
        printf("%d==%c\n", letras[i], letras[i]);
    }

    //inteiros
    int numeros[5];
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    //reais
    float real[5];
    for(int i = 0; i < 5; i ++){
        real[i] = numeros[0] / 2;
    }
    for(int i = 0; i >=0; i--){
        printf("%f\n", real[i]);
    }

}