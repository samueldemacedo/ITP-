#include <stdio.h>
#include <math.h>

int main(){
    
    float celsius, fahrenheit, kelvin;
    
    printf("Esse programa converte graus Celsius em Fahrenheit e Kelvin.\n");
    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius*9/5) + 32;
    kelvin = celsius + 273.15;
    
    printf("%.1f graus Celsius.\n", celsius);
    printf("%.1f graus Fahrenheit.\n", fahrenheit);
    printf("%.1f graus Kelvin.", kelvin);

    return 0;
    
    }
