#include <stdio.h>
#include <stdlib.h>

int main(){
    float farenheit;
    float celsius = 5.0;
    float conversor;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &farenheit);
    conversor = celsius * (farenheit - 32.0)/9.0;
    printf("O resultado = %f", conversor);

    return 0;
}
