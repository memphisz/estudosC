#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 1; //iniciando a variavel de controle
    // while (condição) repete enquanto a condição for verdadeira
    while(cont <= 5){
        printf("%d - hello world!\n",cont);
        cont++; //incremento da variavel de controle
    }

    return 0;

}
