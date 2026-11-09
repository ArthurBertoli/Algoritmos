//Estruturas de decisão!
#include <stdio.h>

//if else
int main(){

    int idade;
    printf("Qual sua idade?");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Você é menor de idade");
    }else if (idade >18 && idade <60){
        printf("Você é adulto");
    }else{
        printf("Você é um velho");
    }
}
//Switch
    int main(){

        int valor;
        printf("\nDigite um valor de 1 a 3: ");
        scanf("%d", valor);

    switch(valor){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("segunda");
            break;
        case 3:
            printf("terça");
            break;
        default:
        printf("Valor inválido");        
        }

    }

