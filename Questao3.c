#include <stdio.h>

int main(){
    int indice = 12, soma = 0, k = 1;

    while(k < indice){
        k = k + 1;
        soma = soma + k;
    }

    printf("O valor final da soma é igual a: %d\n", soma);
}