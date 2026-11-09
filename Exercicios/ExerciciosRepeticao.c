#include <stdio.h>
#include <stdlib.h>

/*Ex 1
int main(){

    int n;
    
    for(n=3;n<=15;n=n+3){
        printf("%i\n", n);
    }
    return 0;
}*/
/*Ex 2
int main(){
    int n;
    for(n=1;n<=100;n++){
        printf("%d\n", n);
    }
    return 0;
}
/*int main(){

    int n=1;
    while(n<=100){
        n++;
        printf("%d\n",n);
    }
    return 0;
}
int main(){

    int n=1;

    do{
        n++;
    }
    while(n<=100);
    printf("%d\n", n);
    
    return 0;
}*/
/*Ex 3
int main(){
    int n=11;

    while(n>0){
        n--;
        printf("%d\n", n);
    }
    printf("FIM\n");
    return 0;
}*/
/*Ex 4
int main(){

    for(int n=0;n<=100000;n=n+1000){
        printf("%d\n", n);
    }
    return 0;
}*/
/*Ex 5
int main(){

    int n, soma;
    soma = 0;

    for(int i=1;i<=10;i++){
        printf("Digite um número inteiro: \n");
        scanf("%d", &n);
        soma = soma + n;
    }
    printf("A soma é: %d\n", soma);
    return 0;
}*/
/*Ex 6/7
int main(){

    float nota, total, media;
    int n;
    total = 0;

    for(n=1;n<=10;n++){
        printf("Digite a primeira nota: \n");
        scanf("%f", &nota);
        total = total + nota;
    }
    media = total / 10;
    printf("A média é: %.2f", media);
    return 0;
}*/
/*Ex 8
int main(){

    int ma, me, v, s, p;
    printf("Digite dez números: \n");
    scanf("%d\n", &p);
    me=p; ma=p;

    for(int i=1;i<=9;i++){
        scanf("%d\n", &v);
        if (ma<v){
            ma=v;
        }else{}
        if(me>v){
            me=v;
        }else{}

        s= s + v;
    }
    printf("Maior valor = %d \n Menor valor = %d \n Média = %d\n", ma, me, (s+p)/10);
    return 0;
}*/
/*Ex 9 (não consegui)
int main(){

    int n;
    printf("digite um numero inteiro: \n");
    scanf("%d", &n);

    while(n=0, n < n, n + 2){
        if(n % 2 == 0){
        n = n + 1;
        printf("%d\n", n);
        }else{
            n = n + 2;
            printf("%d\n", n);
        }
    }
}*/
/*Ex 10
int main(){
    int n;
    n = 0;
    while(n < 100){
        n = n + 2;
        printf("%d\n", n);
    }
    return 0;
}*/
/*Ex 11
int main(){

    int n;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);

    for(int i = 0;i != n; i++ ){
        printf("%d\n", i);
    }
    return 0;
}*/
/*Ex 12
int main(){
    
    int n;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);

    for(int i = n;i != 0; i-- ){
        printf("%d\n", i);
    }
    return 0;
}*/
/*Ex 13/14
int main(){

    int n;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);

    for(int i = 0;i != n; i++ ){
        if(i % 2 == 0){
        printf("%d\n", i);
        }else{
            i = i + 1;
            printf("%d\n", i);
        }
    }
    return 0;
}*/
/*Ex 15/16
int main(){

    int n;
    printf("Digite um número ímpar: \n");
    scanf("%d", &n);

    while(n<=0){
        printf("Valor inválido \n");
        printf("Informe um número positivo: \n");
    }

    for(int i = 1; i<=n; i+=2){
        printf(i + " ");
    }
    return 0;
}*/
int main(){

    int n, i, soma;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    soma = 0;
    i = 1;

    while(i<=n){
        soma = soma + i;
        i = i + 1;
        printf("%d\n", soma);
    }

}


