#include <stdio.h>
#include <stdlib.h>

/*Ex 1
int main(){
    int a[6], soma = 0;
    a[0] = 1;
    a[1] = 0;
    a[2] = 5;
    a[3] = -2;
    a[4] = -5;
    a[5] =  7;

    soma = a[0] + a[1] + a[5];

    printf("\n Soma = %d", soma);
    
} */
/*Ex 2
int main(){

    int v[6], i = 5;

    for(i = 0; i < 6; i++){

        printf("\nPosição %d = ", i);
        scanf("%d", &v[i]);
    }
    //ler um vetor 
}*/
/*Ex 3
int main(){

    int v1[10], v2[10], i;
    
    for(i = 0; i < 10; i++){
        printf("Digite a posição %d: ", i);
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < 10; i++)
        v2[i] = v1[i] * v1[i];
    

    printf("Vetor 1: ");
    for( i = 0; i < 10; i++)
        printf("%d", v1[i]);
    

    printf("Vetor 2:");
    for( i = 0; i < 10; i++)
        printf("%d", v2[i]);
}*/
/*Ex 5
int main(){

    int v[10], par[10], impar[10], contap = 0, contai = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite %d numero\n", i);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i++){
        if(v[i] % 2){
            impar[contai] = v[i];
            contai++;
        }else{
            par[contap] = v[i];
            contap++;
        }
    }
    printf("Pares: \n");
    for(int i = 0; i < 10; i ++){
        printf(" %d - %d \n", i , par[i]);

    }
}*/
/*Ex 6/7
int main(){
    int vet[10], menor=999999, maior=0;


    for(int i= 0; i < 10; i++){

        printf("Digite o valor da posição %d\n", i);
        scanf("%d", &vet[i]);   
    }
    for(int i = 0; i < 10; i++){
        
        printf("%d\n", vet[i]);
        if(menor > vet[i]){
            menor = vet[i];
        }else if(maior < vet[i]){
            maior = vet[i];
        }
    }
    printf("Menor: %d\n Maior: %d\n \n \n", menor, maior);
}*/
/*Ex 8/9
int main(){

    int vet[6], i;

    for(i = 0; i < 6; i++){
    printf("Digite o valor da posiçao %d\n", i);
    scanf("%d", &vet[i]);
    }

    for(i = 5; i >=0; i--){
    
        printf("%d", vet[i]);
    }
}*/
/*Ex 10
int main(){

    float vet[15] , soma = 0 , media;
    
    for(int i = 0; i < 15; i++){
        
        printf("Digite o valor da posição %d: ", i);
        scanf("%f", &vet[i]);
        soma += vet[i];
    }
    media = soma/15;
    printf("A média é: %.2f", media);
}