#include <stdio.h>
#include <math.h>

//if, else if, else//

int main(){
    
    float altura, peso, imc;
    
    printf("Calculadora de IMC.\n");
    
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    
    
    imc = peso / pow(altura,2);
    
    
    if (imc < 18.5){
        printf("IMC = %.2f\n - Abaixo do peso\n",imc);
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf("IMC = %.2f\n - Normal\n",imc);
    }
    else if (imc >= 25.0 && imc <= 29.9){
        printf("IMC = %.2f\n - Acima do peso\n",imc);
    }
    else {
        printf("IMC = %.2f\n - Obesidade",imc);
    }
    
    
    return 0;
}
