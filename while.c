#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 1; //iniciando a variavel de controle
    // while (condi��o) repete enquanto a condi��o for verdadeira
    while(cont <= 5){
        printf("%d - hello world!\n",cont);
        cont++; //incremento da variavel de controle
    }

    return 0;

}
