#include <stdio.h>
#include <math.h>

int main(){

float valor;

    printf("Digite o valor total da sua compra:\n");
    scanf("%f", &valor);

    if (valor <= 100.00) {
        printf("Sem desconto\n");
        printf("Valor a ser pago: %.2f", valor);
    }

    else if ( valor > 100.00 && valor <= 500.00){
        printf("O desconto será de 10%%\n");
        printf("Valor a ser pago: %.2f", valor - (valor * 10 / 100));
    }

    else if ( valor > 500.00 && valor <= 1.000){
    printf("O desconto será de 15%%\n");
    printf("Valor a ser pago: %.2f", valor - (valor * 15 / 100));

    }
    else {
    printf("O desconto será de 20%%\n");
    printf("Valor a ser pago: %.2f", valor - (valor * 20 / 100));
    
    }


}