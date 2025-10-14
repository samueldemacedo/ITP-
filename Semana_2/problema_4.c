#include <stdio.h>
#include <math.h>

int main(){
    
    int num1, num2, soma, sub, prod, resto;
    float divi, media;
    
    printf("4 - Operações aritméticas básicas\n");
    
    printf("Digite um número:\n");
    scanf("%i",&num1);
    
    printf("Digite outro número:\n");
    scanf("%i",&num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    divi = (float) num1 / num2;
    prod = num1 * num2;
    resto = num1 % num2;
    media = (num1 + num2) / 2.0;
    
    printf("Soma = %i\n", soma);
    printf("Subtração = %i\n", sub);
    printf("Divisão = %.2f\n", divi);
    printf("Produto = %i\n", prod);
    printf("Resto da divisão inteira = %i\n", resto);
    printf("Média aritmética = %.2f", media);

    return 0;
    
}
