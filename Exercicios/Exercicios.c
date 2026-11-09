#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*Ex 2
int main(){
    
    float num1 = 0;
    printf("\nDigite um numero ");
    scanf("%f", &num1);
    printf("\n %f", &num1);



    return 0;
}*/
/*Ex 3
int main (){
    
    int a, b, soma;
    printf("\nDigite um valor inteiro: ");
    scanf ("%d", &a );

    printf("\nDigite outro valor inteiro: ");
    scanf ("%d", &b);

    soma = a + b;

    printf ("\nA soma é = %d", soma );

    return 0;
}*/
/*Ex 4
int main (){

    float num, quadrado;
    printf("\nDigite um número: ");
    scanf ("%f", &num);

    quadrado = num*num;
    printf("\nO quadrado do número é = %f", quadrado);

    return 0;
}*/
/*Ex 5
int main (){

    float num, quinta;
    printf("\nDigite um número real: ");
    scanf("%f", &num);

    quinta = num / 5;
    printf("\nA quinta parte do número é = %f", quinta);

    return 0;

}*/
/*Ex 6
int main(){

    double c, f;
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%lf", &c);

    //divisão fracionada é só colocar .0 (9.0/5)
    f = 9*c/5 +32;
    
    printf("\nA temperatura convertida para Fahrenheit = %lf", f);
    
    return 0;
}*/
/* Ex 7

 int main(){
    double f, c;
    printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%lf", &f);

    c = 5.0*(f-32.0)/9.0;
    printf("\n A temperatura convertida para Celsius = %lf", c);

    return 0;
 }*/
/* Ex 8/9 
int main(){
    
    float c, k;
    printf("\nDigite a temperatura em Kelvin");
    scanf("%f", &k);

    c = k - 273,15;

    printf("\nA temperatura em Celsius = %f", c);



    return 0;
 }*/
/* Ex 10/11
int main(){
    float k, m;
    printf("\nDigite uma velocidade em Km/h");
    scanf("%f", &k);

    m = k/3,6;

    printf("\nA velocidade em metros por segundo é = %f", m);
    
    return 0;
 }*/
/* Ex 12/13
int main(){

    float m, kilo;
    printf("\nDigite uma distância em milhas ");
    scanf("%f", &m);

    kilo = 1,61*m;
    printf("\nA distância em quilômetros é = %f", kilo);

    return 0;
}*/
/* Ex 14/15
int main(){
    float r, g;
    printf("\nDigite um ângulo em graus: ");
    scanf("%f", &g);

    r = 3.14 * g/180;
    printf("\nO valor em radianos é: %f", r);

}*/
//Exercício 16-27 é tudo mesma coisa//
/*Ex28
int main() {
 int a, b, c, result;
 printf("\nDigite três valores inteiros: ");
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);

 result = a*a + b*b + c*c;
 printf ("\n A soma dos quadrados desses valores é: %d", result);
 result 0;
}*/
/*Ex 29
int main(){
    float n1, n2, n3, n4, media;
    printf("\nDigite sua primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite sua segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite sua terceira nota: ");
    scanf("%f", &n3);
    printf("\nDigite sua quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) /4;
    //o .2 é pra formatar a saída, deixar apenas 2 casas após a vírgula
    printf("\nSua média é: %.2f", media);

    return 0;
}*/
/*Ex 30
int main(){

    float r, d;
    printf("\nDigite a quantidade em reais: ");
    scanf("%f", &r);

    d = r / 5.15;
    printf("\nO valor em dólar é: %f", d);
    return 0;
}*/
/*Ex 31
int main() {

    int a, b, c;
    printf("\nDigite um número inteiro: ");
    scanf("%d", &a);

    b = a - 1;
    c = a + 1;

    printf("\n seu antecessor é: %d", b);
    printf("\n seu sucessor é: %d", c);
    return 0;
}*/
/*Ex 32
int main(){
    
    int a, b, c, soma;
    printf("\nDigite um número inteiro: ");
    scanf("%d", &a);

    b = a*2 - 1;
    c = a*3 + 1;
    soma = b + c;
    printf("\n A soma dos números é: %d", soma);
    
    return 0;
}*/
/*Ex 33/34
int main(){
    int l, a;
    printf("\nDigite o lado de um quadrado: ");
    scanf("%d", &l);

    a = l*l;
    printf("\nA área desse quadrado é: %d", a);
    return 0;
}*/
/*Ex 35 (ta dando erro por algum motivo)
int main(){
    double a, b, h;
    printf("\nDigite os valores dos catetos: ");
    scanf("%lf", &a);
    printf("\nDigite os valores dos catetos: ");
    scanf("%lf", &b);

    h = sqrt( pow(a, 2) + pow(b, 2));
    printf("\n A hipotenusa desse triângulo é: %lf", h);
    return 0;
}*/
/*Ex 36
int main(){

    float a, r, v;
    printf("\nDigite a altura e o raio de um cilindro: ");
    scanf("%f", &a);
    scanf("%f", &r);

    v = 3.14 * (r * r) * a;
    printf("\nO volume do cilindro é: %.2f", v);
}*/
/*Ex 37
int main() {

    float valor, valordesconto;
    printf("\nDigite o preço de seu produto: ");
    scanf("%f", &valor);

    valordesconto = valor - (valor * 0.2);
    printf("\nO valor com desconto é: %f", valordesconto);

    return 0;
}*/
/*Ex 38
int main(){

    float salario, novosalario;
    printf("\nDigite seu salário: ");
    scanf("%f", &salario);

    novosalario = salario + (salario * 0.25);
    printf("\n O novo salario é: %f", novosalario);
    return 0;
}*/
/*Ex 39
int main(){

    float primeiro, segundo, terceiro;
    primeiro = 780 * 0.46;
    segundo = 780 * 0.32;
    terceiro = 780 - primeiro - segundo;

    printf("\n O primeiro irá ganhar %.2f", primeiro);
    printf("\n O segundo irá ganhar %.2f", segundo);
    printf("\n O terceiro irá ganhar %.2f", terceiro);
}*/
/*Ex 40
int main(){
    int dias;
    float quantia;
    printf("\nDigite quantos dias o encanador trabalhou: ");
    scanf("%d", &dias);

    quantia = 30 * dias * 0.8;
    printf("\nDeverá ser pago: %f", quantia);

    return 0;
}*/
/*Ex 41 
int main (){
    float valor, total;
    int horas;
    printf("\nQual é o valor da hora?");
    scanf("%f", &valor);
    printf("\nQuantas horas foram trabalhadas?");
    scanf("%d", &horas);

    total = valor * horas + (valor * 0.1);
    printf("\n O total em dinheiro para pagar é: %f", total);
    
    return 0;
}*/
/*Ex 42
int main(){

    float salariob, salario, grat, impo, desc;
    printf("Qual seu salário base?");
    scanf("%f", &salariob);

    grat = salariob * 0.5;
    impo = salariob * 0.7;
    desc = salariob - impo;

    salario = desc + grat;
    printf("Seu salário é: %f", salario);
    return 0;
}*/
/*Ex 43
int main(){

    float valort, desct, parcela, comissao, compar;
    printf("\nDigite o valor total");
    scanf("%f", &valort);

    desct = valort - (valort * 0.1);
    parcela = valort / 3;
    comissao = desct * 0.5;
    compar = valort * 0.5;

    printf("\nValor total é: %f", desct);
    printf("\nO valor em 3 parcelas é: %f", parcela);
    printf("\nA comissão do vendedor é: %f", comissao);
    printf("\nA comissão do vendedor caso parcelada é: %f", compar);
    
    return 0;
}*/
/*Ex 44
int main(){
    float alturae, alturau, altura;
    printf("Qual a altura do degrau da escada? ");
    scanf("%f", &alturae);
    printf("Qual a altura desejada? ");
    scanf("%f", &alturau);

    altura = alturau / alturae;
    printf("A quantidade de degraus necessários é: %f", altura);

    return 0;
}*/


