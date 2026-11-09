//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
    char nome[100], sobrenome[50];
    char a = '0';
    int esp = 0, zero = 0;
    scanf("%[^\n]s", nome);
    nome[strlen(nome)]=a;

    // printf("%s\n", nome);
    for(int i = 0; i < sizeof(nome); i++){
        if(nome[i] == '0'){
            zero = i;
            break;
        }else if(isspace(nome[i])){
            esp = i;
        }
    }

    // printf("%d\n", esp);
    // printf("%d\n", zero);
    for(int i = esp + 1; i < zero; i++){
        nome[i] = toupper(nome[i]);
        printf("%c",nome[i]);
    }
    printf(", ");

    for(int i = 0; i < esp; i++){
        if(isupper(nome[i])){
            printf("%c.", nome[i]);
        }
    }
    printf("\n");

    

    return 0;
}