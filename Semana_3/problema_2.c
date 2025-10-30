#include <stdio.h>
#include <math.h>

int main (){
    
    float valor;
    float r = 0.60;
    float c = 0.48;
    float i = 1.29;
    
    float taxa = 15.00;
    float consumo = 0;
    char consumidor;
    
    printf("Digite seu consumo total: ");
    scanf("%f", &consumo);
    
    printf("Qual o tipo de consumidor (r,c,i): \n");
    scanf(" %c", &consumidor);
    
    switch (consumidor){
        case 'r':
            printf("O consumo será de R$ %.2f\n", r * consumo + taxa);
            break;
        
        case 'c':
            printf("O consumo será de R$ %.2f\n", c * consumo + taxa);
            break;
            
        case 'i':
            printf("O consumo será de R$ %.2f\n", i * consumo + taxa);
            break;

            default:
            printf("Erro. Tipo de consumidor inválido");
    }

    return 0;
}