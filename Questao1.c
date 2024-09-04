#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n, valor;
    int i = 0;

    printf("Diga o número que desejar: ");
    scanf("%d", &n);

    while((valor = fibonacci(i)) < n){
        i++;
    }

    if(valor == n){
        printf("O número informado(%d) está presente na sequência de Fibonacci\n", n);
        return 0;
    }
    printf("O número informado(%d) não está presente na sequência de Fibonacci\n", n);

    return 0;
}   