#include <stdio.h>
#include <stdlib.h>

int main(){
    //executa um comando primeiro e somente testa se a condição é verdadeira no final
    //isto garante que o comando será executado no mínimo UMA vez
    //diferente do while que executa apenas se for verdadeiro
    int resp;

    do{
    printf("Digite um numero positivo para repetir: ");
    scanf("%d",&resp);
    }
    while(resp > 0);

    return 0;

}
