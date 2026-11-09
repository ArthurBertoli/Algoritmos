#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Ex 1
int main(){
    int num1, num2;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite outro valor inteiro: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O maior número é %d", num1);
    }else{
        printf("O maior número é %d", num2);
    }

    return 0;
}*/
/*Ex 2
int main(){
    int num1, raiz;
    printf("\nDigite um número inteiro: ");   
    scanf("%d", &num1);

    if (num1 > 0){
        raiz = sqrt(num1);
    }else {
        printf("Número inválido\n");
    }

    return 0;
}*/
/*Ex 5
int main(){

    int num1;
    printf("\nDigite um número inteiro: ");
    scanf("%d", &num1);

    if(num1 % 2 == 0){
        printf("\n É um número par");
    }else {
        printf("\nÉ um número ímpar\n");
    }

}*/
/*Ex 6
intf("\nDigite um número inteiro: ");
    scanf("%d", &num1);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2){
        
        diferença1 = num1 - num2;
        printf("\nO maior número é: %d", num1);
        printf("\nA diferença deles é: %d", diferença1);
    }else{

        diferença2 = num2 - num1;
        printf("\nO maior número é: %d", num2);
        printf("\nA diferença deles é: %d", diferença2);
    }

    return 0;
}*/
/*Ex 7
int main(){

    int num1, num2;
    printf("\nDigite um valor inteiro ");
    scanf("%d", &num1);

    printf("\nDigite outro valor inteiro ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        printf("O maior numero é: %d", num1);
    }else if(num2 > num1){
        printf("O maior número é: %d", num2);
    }else {
        printf("Os dois números são iguais");
    }
    return 0;
}*/
/*Ex 8
int main(){

    float nota1, nota2, media;
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    if(nota1 > 10 && nota1 < 0){
        printf("Nota inválida");
    }else if(nota2 > 10 && nota2 <0){
        printf("Nota inválida");
    }else{
    printf("Sua média é: %.2f", media);
    }
    
    return 0;
    // É quase isso kk
}*/
/*Ex 9
int main(){

    float salario, presta;
    printf("Digite seu salário: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação que deseja: ");
    scanf("%f", presta);

    if (presta > salario * 0.2){

        printf("Empréstimo não concedido. ");
    }else{
        printf("Empréstimo concedido. ");
    }
    return 0;
}*/
/*Ex 10
int main(){

    float altura, pesoM, pesoF;
    char sexo;
    printf("Digite sua altura ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino):  ");
    scanf("%f", &sexo);

    if(sexo = "M"){
        pesoM = altura * 72.7 - 58;
        printf("seu peso ideal seria: %.2f", pesoM);
    }else{
        pesoF = altura * 62.1 - 44.7;
        printf("Seu peso ideal seria: %.2f", pesoF);
    }
    return 0;
}*/
/*Ex 12
int main(){

    int num1;
    float c;
    prinf("Digite um número inteiro positivo: ");
    scanf("%d", &num1);
    if(num1 < 0){
        printf("Número inválido");
    }else{
        c = log(num1);
        printf("O log desse número é: %f", c);
    }
    return 0;
}*/
/*Ex 13
int main(){

    float n1, n2, n3, mp;
    printf("Digite suas notas: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    mp = (n1 + n2 + n3) /3;
    if(mp > 6){
        printf("O aluno foi aprovado!");
    }else{
        printf("O aluno foi reprovado");
    }
    return 0;
}*/
/*Ex 14
int main(){

    float n1, n2, n3, m;
    printf("Digite suas notas (Laboratório, avaliação e exame respectivamente) ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    m = (n1 + n2 + n3)/ 10;

    if(m >= 0 && m <= 2.9){
        printf("O aluno está reprovado");
    }else if(m >= 3 && m <= 4.9){
        printf("O aluno está de recuperação");
    }else {
        printf("O aluno está aprovado");
    }
        return 0;
}*/
/*Ex 15/16
int main(){

    int dia;
    printf("Digite um valor de 1-7: ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
        printf("Segunda");
        break;
        case 2:
        printf("Terça");
        break;
        case 3:
        printf("Quarta");
        break;
        case 4:
        printf("Quinta");
        break;
        case 5:
        printf("Sextou");
        break;
        case 6:
        printf("Sabadasso");
        break;
        case 7:
        printf("Domingao");
        break;
        default:
        printf("Valor inválido");
    }
    return 0; 
}*/
/*Ex 17
int main(){

    float b, bezao, h, a;
    printf("Digite respectivamente a base maior, base menor e a altura do trapézio: ");
    scanf("%f", &b);
    scanf("%f", &bezao);
    scanf("%f", &h);

    a = (b + bezao) * h / 2;
    printf("A área do trapézio é: %f", a);

    return 0;
}*/
/*Ex 18
int main(){

    int opçao, num1, num2, soma, sub, mult, divi;
    printf("Escolha a operação matemática desejada: 1. Soma 2. Subtração 3. Multiplicação 4. Divisão ");
    scanf("%d", &opçao);

    switch(opçao){
        case 1:
        printf("Digite dois números inteiros: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
        soma = num1 + num2;
        printf("A soma é igual a: %d", soma);
        break;

        case 2:
        printf("Digite dois números inteiros: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
        sub = num1 - num2;
        printf("A subtração é igual a: %d", sub);
        break;

        case 3:
        printf("Digite dois números inteiros: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
        mult = num1 * num2;
        printf("A multiplicação é igual a: %d", mult);
        break;

        case 4:
        printf("Digite dois números inteiros: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
        divi = num1 / num2;
        printf("A divisão é igual a: %d", divi);
        break;

        default:
        printf("Opção não encontrada");
    };
    
}*/
/*Ex 19
int main(){

    int num;
    printf("Digite um número inteiro");
    scanf("%d", &num);
    
    if(num % 3 == 0){
        printf("O número é divisível por 3");
    }else if(num % 5 == 0){
        printf("O número é divisível por 5");
    }else{
        printf("O número não é divisível nem por 3, nem por 5");
    }
    return 0;
}*/
/*Ex 20
int main(){

    int a, b, c;
    printf("Digite os três lados do triângulo");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b + c || a > b + c || b  > c + a){
        printf("Não é um triângulo");
    }else if(a == b && b == c){
        printf("É um triângulo equilátero");
    }
}*/
