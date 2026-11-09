//Alunos: Arthur Bertoli Silva e Guilherme Augusto Santos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main(){

    int op, desconto, tel, qntd, conf, desc, total1=0, total, vac=190, cast;
    char nome[30];
    char dia[20];
    char especie[10];
    char nomeb[20];
    char racao;
    char str[] = {"felino"};
    char remedio[100];
    bool ver = true;    

    printf("\nQual seu nome?\n");
    fgets(nome,30,stdin);
    printf("\nQual serviço você deseja?(1-4): \n");
    printf("1)Vacina\n2)Castração\n3)Venda de ração\n4)Medicamentos\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("\nO custo da vacina é de R$90,00.");
            printf("\nA vacina gera uma cobrança de R$100,00.\n");
            printf("\nVocê deseja fazer a vacina?(Digite 1-2)\n1)Sim\n2)Não\n");
            scanf("%d", &conf);

            if(conf == 1){
                printf("\nQual a data que você deseja fazer a vacina?\n");
                fgets(dia,20,stdin);
                fgets(dia,20,stdin);
                printf("\nVocê possui um felino ou um canino?\n");
                fgets(especie,10,stdin);
                printf("Qual é o nome do seu pet?\n");
                fgets(nomeb,20,stdin);
                printf("\nCliente: %sData: %sEspécie: %sNome: %s", nome, dia, especie, nomeb);
                total = vac;
                printf("Total: R$%d\n", total);
            }
            
        break;

        case 2:
            printf("\nO custo da castração é de R$120,00 para felinos e R$180,00 para caninos.");
            printf("\nA castração gera uma cobrança de R$100,00.");
            printf("\nVocê deseja fazer a castração?(Digite 1-2)\n1)Sim\n2)Não\n");
            scanf("%d", &conf);

            if(conf == 1){
                printf("\nQual a data que você deseja fazer a castração?\n");
                fgets(dia,20,stdin);
                fgets(dia,20,stdin);
                printf("\nVocê possui um felino ou um canino?\n");
                fgets(especie,10,stdin);
                printf("Qual é o nome do seu pet?\n");
                fgets(nomeb,20,stdin);
                printf("\nCliente: %sData: %sEspécie: %sNome: %s", nome, dia, especie, nomeb);

                for(int i=0; i <6; i++){

                    if(str[i] != especie[i]){
                        ver = false;
                    } 
                }if(ver == true){
                    cast = 220;
                    total = cast;
                    printf("Total: R$%d\n", total);
                }else{
                    cast = 280;
                    total = cast;
                    printf("Total: R$%d\n", total);
                    }
            }

        break;

        case 3:
            printf("Qual tamanho de ração você deseja? (Digite P, M ou G)\nP-R$30,00\nM-R$70,00\nG-R$120,00\n");
            scanf("%c", &racao);
            scanf("%c", &racao);
            if(racao == 'P'){
                printf("Deseja levar quantos pacotes?\nNa compra de 2 pacotes ou mais, você recebe 10%% de desconto.\n");
                scanf("%d", &qntd);
                if(qntd > 1){
                    desc = 10;
                    total = qntd * 30;
                    desconto = total * desc/100;
                    total1 = total - desconto;
                }else{
                    total1 = 30;
                }
                printf("\nCliente: %s%d unidade(s) da ração tamanho %c \nR$%d \nDesconto: %d%%\nTotal: R$%d\n", nome, qntd, racao, total, desc, total1);
            }
            if(racao == 'M'){
                printf("Deseja levar quantos pacotes?\nNa compra de 2 pacotes ou mais, você recebe 10%% de desconto.\n");
                scanf("%d", &qntd);
                if(qntd > 1){
                    desc = 10;
                    total = qntd * 30;
                    desconto = total * desc/100;
                    total1 = total - desconto;
                }else{
                    total1 = 70;
                }
                printf("\nCliente: %s%d unidade(s) da ração tamanho %c \nR$%d \nDesconto: %d%%\nTotal: R$%d\n", nome, qntd, racao, total, desc, total1);
            }
            if(racao == 'G'){
                printf("Deseja levar quantos pacotes?\nNa compra de 2 pacotes ou mais, você recebe 10%% de desconto.\n");
                scanf("%d", &qntd);
                if(qntd > 1){
                    desc = 10;
                    total = qntd * 30;
                    desconto = total * desc/100;
                    total1 = total - desconto;
                }else{
                    total1 = 120;
                }
                printf("\nCliente: %s%d unidade(s) da ração tamanho %c \nR$%d \nDesconto: %d%%\nTotal: R$%d\n", nome, qntd, racao, total, desc, total1);
            }

        break;

        case 4:
            printf("\nQual seria o medicamento que você precisa?\n");
            fgets(remedio,100,stdin);
            fgets(remedio,100,stdin);
            printf("\nQual é o seu telefone?\n");
            scanf("%d", &tel);
            printf("\nCliente: %sMedicamento: %sContato: %d\n", nome, remedio, tel);

    }
    return 0;
}
