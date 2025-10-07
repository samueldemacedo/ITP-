#include <stdio.h>
#include <math.h>

int main(){
    
    float capital, montante, juros;
    int anos;
    
    printf("Digite o capital inicial (R$):\n");
    scanf("%f",&capital);
    
    printf("Digite quantos anos totais:\n");
    scanf("%i",&anos);
    
    printf("Digite os juros anuais:\n");
    scanf("%f",&juros);
    
    montante = capital * pow(1 + juros / 100, anos);
    
    printf("O montante final após %i anos, será de R$%.2f reais", anos, montante);
    
}
