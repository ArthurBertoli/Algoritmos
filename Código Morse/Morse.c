//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void portmorse(void){
    char frase[1000];
    scanf("%[^\n]s", frase);
    char morse[36][36] = {".–","–...","–.–.","–..",".","..–.","––.","....","..",".–––",".–..","––","–.","–––",".––.","––.–",".–.","...","–","..–","...–",".––","–..–","–.––","––..",".––––","..–––","...––","....–",".....","–....","––...","–––..","––––.","–––––"};
    char abc123[36] = {'A','B','C','D','E','F','G','H','I','J','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};
    for(int i = 0; i < strlen(frase); i++){
        if(isspace(frase[i])){
            printf("   ");       
        }
        for(int j = 0; j < 36; j++){
            if(frase[i] == abc123[j]){
                printf("%s ", morse[j]);
            }
        }
        }
        printf("\n");
    }
// transformar de morse pra portugues

void morseport(void){
    char morse[36][36] = {".–","–...","–.–.","–..",".","..–.","––.","....","..",".–––",".–..","––","–.","–––",".––.","––.–",".–.","...","–","..–","...–",".––","–..–","–.––","––..",".––––","..–––","...––","....–",".....","–....","––...","–––..","––––.","–––––"};
    char abc123[36] = {'A','B','C','D','E','F','G','H','I','J','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};
    char frase[1000];
    int esp = 0;
    scanf("%[^\n]s", frase);

    // .. -...   ..
    
    for(int i = esp; i < strlen(frase); ){
        for(int j = 0; j < 36; j++){
            // printf("esp:%d\n", esp);
            for(int k = 0; k < strlen(morse[j]); k++){
                // printf("i:%d\n", i);
                if(frase[i] == ' ' && frase[i+1] == ' '){
                    printf("%c ", abc123[j]);
                    printf("  ");
                }else if(frase[i] == ' ' || i == strlen(frase) - 1){
                    i++;
                    esp = i;
                    printf("%c ", abc123[j]);
                    j = -1;
                    break;
                }
                else if(frase[i] == morse[j][k]){
                    // printf("ii:%d\n", i);
                    i++;
                    continue;
                }else if(frase[i] != morse[j][k]){
                    i = esp;
                    break;
                }

            }
            if(i == strlen(frase)){
                break;
            }
        }
    }
    printf("\n");
}

int main(){
    int q = 0;
    while(q == 0){
        portmorse();
        q=1;
    }
    


    return 0;
}