#include <stdio.h>
#include <math.h>

int main(){

    float a, b, r, ar;
    int n, parar;
    printf("Escolha uma figura: 1- Círculo 2- Triângulo 3- Retângulo 4- Quadrado: \n");
    scanf("%d", &n);


    while(parar !=-1){
    switch (n)
    {
    case 1:
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    ar = 3.14 * pow(r, 2);
    printf("A área do círculo é: %f", ar);
    break;

    case 2:
        printf("Digite a base e a altura do triângulo: \n");
        scanf("%f", &a);
        scanf("%f", &b);
        ar = (b * a)/2;
        printf("A área do triângulo é: %2.f\n", ar);
        break;
    
    case 3:
        printf("Digite os lados do retângulo: \n");
        scanf("%f", &a);
        scanf("%f", &b);
        ar = a * b;
        printf("A área do retângulo é: %2.f\n", ar);
        break;

    case 4: 
        printf("Digite os lados do quadrado: \n");
        scanf("%f", &a);
        scanf("%f", &b);
        ar = a * b;
        printf("A área do quadrado é: %2.f\n", ar);
        break;
    
    default:
        printf("Digite um número válido");
        break;
    }
    printf("Deseja continuar? \n");
    scanf("%d", parar);

    }
    return 0;

}