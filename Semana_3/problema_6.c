#include <stdio.h>
#include <math.h>

int main (){

    char febre;
    char dorcab;
    char dorcorp; 
    char tosse;

    printf("Tem febre? (S/N)\n");
    scanf(" %c", &febre);

    printf("Tem dor de cabeça? (S/N)\n");
    scanf(" %c", &dorcab);

    printf("Tem dor no corpo? (S/N)\n");
    scanf(" %c", &dorcorp);

    printf("Tem tosse? (S/N)\n");
    scanf(" %c", &tosse);

    if (febre == 'S' && dorcab == 'S' && dorcorp == 'S'){
        printf ("Possível gripe");
    }

    else if (tosse == 'S' && febre == 'S'){
        printf ("Possível resfriado");
    }

    else if (dorcab == 'S'){
        printf ("Possível enxaqueca");
    }

    else if (febre == 'S') {
        printf("Consulte um médico");
    }

    else if (febre == 'N' && dorcab == 'N' && dorcorp == 'N' && tosse == 'N'){
        printf("Você parece estar bem");
    }

    else {
        printf("Consulte um médico para avaliação");
    }


}