#include <stdio.h>
#include <math.h>

 //fazer um programa que leia a média de 3 notas com o if//
 
 int main(){
     
     float n1, n2, n3;
     float media;
     
     printf("Digite a primeira nota:\n");
     scanf("%f", &n1);
     
     printf("Digite a segunda nota:\n");
     scanf("%f", &n2);
     
     printf("Digite a terceira nota:\n");
     scanf("%f", &n3);
     
     media = (n1 + n2 + n3) / 3;
     
     if (media < 4.0){
         printf("Reprovado\n");
     }
     
     else if (media >= 4.0 && media < 7.0){
         printf("Recuperação\n");
         
        float notafinal = 10.0 - media;
         printf("A nota da recuperação precisa ser de no mínimo %.2f pontos.\n", notafinal);
         
          }
     
     else {
         printf ("Aprovado\n");
     }
     
     return 0;
     
     }
