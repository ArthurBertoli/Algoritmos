#include <stdio.h>
#include <stdlib.h>

//Tipos Numéricos:
int main(){

    int // %d Números inteiros: 1, 60, 90, 424 
    float // %f Números reais: 22.43, 55.21
    double // %lf É o dobro de dados do float (números grandes)
}

//Tipos Alfanuméricos *Tabela asc importante:
int main(){

    char; // %c 'o' Um caracter, entre aspas

    char nome[50]; // %s Uma string que cabe 49 caracteres (array)
    getsf(nome); // Ao invés de scanf, se usa getsf para strings

    //Gerando um alfabeto em letra minúscula com a tabela asc
    for(int= 97; i <=122; i++){
        printf("%c\n", i);
    }
}

//Tipos Booleanos (True ou False):

//Em C, 0 é falso, e tudo diferente de 0 é verdadeiro.
int main(){
    
    int boole = 0;
    if(boole){
        printf("verdadeiro");
    }else{
        prinf("falso");
    }
}

//Operações Matemáticas:
//Módulo (resto da divisão) %
int main(){
    
    int num1, num2, soma, sub, mult, divi, quad, modu;
    //Soma +
    soma = num1 + num2;

    //Subtrair -
    sub = num1 - num2;

    //Multiplicar *
    mult = num1 * num2;

    //Dividir /
    divi = (float)num1 / (float)num2; //Isso é cast, convertendo um número nessa operação em específico.
    divi = num1 / num2;

    //Quadrado num1 * num1
    quad = num1 * num1;

    //Módulo % (verificando se é par ou ímpar)
    if(num1 % 2 == 0){
        printf("é par");
    }else{
        printf("é impar");
    }

}