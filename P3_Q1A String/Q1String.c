#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char texto[1000];
    char contr[1000];
    int tam, cont=0;

    fgets(texto, 1000, stdin);
    //só faltou inverter a string 
  
    for(int i = 0; i < strlen(texto); i++){
        for(int j = 0; j < strlen(contr); j++){
            if(isdigit(texto[i] == contr[j])){
            cont++;
            }
        }
    }

     for(int i = 0; i < strlen(texto); i++){
        for(int j = 0; j < strlen(contr); j++){
            if(isalpha(texto[i] == contr[j])){
            cont++;
            }
        }
    }

     for(int i = 0; i < strlen(texto); i++){
        for(int j = 0; j < strlen(contr); j++){
            if(isponct(texto[i] == contr[j])){
            cont++;
            }
        }
    }
     for(int i = 0; i < strlen(texto); i++){
        for(int j = 0; j < strlen(contr); j++){
            if(isblank(texto[i] == contr[j])){
            cont++;
            }
        }
    }

    if(cont == 4){
        printf("SIM");
    }else{
        printf("NÃO");
    }
    
}