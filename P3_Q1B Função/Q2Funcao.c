#include <stdio.h>
#include <stdlib.h>



float funcof(float x1, float x2, float y1, float y2){

    float total;

    total = (x1 - x2) / (y1 - y2);

    return total; 
}

int main(){


    float x1, x2, y1, y2, resultado;
    printf("\nDigite os dois pares de números que deseja calcular:\n ");
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &y1);
    scanf("%f", &y2);


    while(x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0){
        resultado = funcof(x1, x2, y1, y2);
        printf("\n%2.f\n", resultado);
        printf("\nDigite os dois pares de números que deseja calcular: \n");
        scanf("%f", &x1);
        scanf("%f", &x2);
        scanf("%f", &y1);
        scanf("%f", &y2);
    }

    printf("\nINF\nAcabou.");
    
    

}