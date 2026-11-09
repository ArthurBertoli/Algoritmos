#include <stdlib.h>
#include <stdio.h>

//Funções

void mensagem(){
    printf("opa, bao?\n");
}

int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}

void proximo_char(char caractere){
    printf("%c", caractere + 1);
}

int main(){

    mensagem();

    //int retorno = soma(5,20);
    //printf("Retorno = %d\n", retorno);

    printf("Retorno = %d\n", soma(5,20));

    char cara = 'a';
    proximo_char(cara);




    return 0;

}