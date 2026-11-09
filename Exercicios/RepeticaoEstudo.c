#include <stdio.h>

/*
Estruturas de repetição: for, while, do... while
para, enquanto, faça... enquanto
*/

/*
FOR
Faça um programa, no qual receba e some 5 números inteiros
até que a entrada seja 0
*/  

//Número fixo de elementos

int main(){

    int num, soma = 0;

    //para o int i iniciando em 0; enquanto o i for menor que 5; incrementa i + 1
    //inicialização(i=0), critério de parada (i<5), forma de incremento (i++)
    for (int i = 0; i < 5; i++){

    printf("Informe um número: ");
    scanf("%d", &num);

    soma = soma + num;
    }
}

//WHILE
/*
Utilizado quando precisa de um loop onde não se tenha um numero fixo
de elementos, mas que tenha um critério de parada e antes de iniciar
o loop de condição é checada.
*/

/*
Faça um programa no qual receba e some números inteiros até
que o número de entrada seja 0. E apresente a soma no final
*/

//Entra no loop se a condição for verdadeira(num!=0)
int main(){

    int num, soma = 0;
    printf("Informe um número: ");
    scanf("%d", num);

    while(num != 0){
        soma = soma + num;
        printf("Informe um número: ");
        scanf("%d", num);
    }
    printf("A soma é: %d", soma);
}

//DO WHILE
/*
Utilizado quando precisa de um loop onde não se tenha um numero fixo
de elementos, mas que tenha um critério de parada e a condição de 
parada é checada após a primeira execução.
*/
//pergunta primeiro executa dps
int main(){

    int num, soma = 0;

    do{
        printf("Informe um número: ");
        scanf("%d", num);
        soma = soma + num;
    }
    while(num != 0);
    printf("A soma é: %d", soma);
}