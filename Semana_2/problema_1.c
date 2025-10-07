#include <stdio.h>
#include <math.h>

int main(){
    
    float altura, peso, imc;
    
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    
    imc = peso / pow(altura,2);
    
    printf("Seu IMC é de: %.2f", imc);
    
    }
