#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero eh par!");
    }else{
        printf("O numero eh impar!");
    }

    return 0;

};
