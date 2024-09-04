#include <stdio.h>
#include <string.h>

int main(){
    char string[25] = "Gabriel Siqueira Moreira";
    int i = 0;
    int ocorrencia = 0;

    while(i < strlen(string)){
        if(string[i] == 'a' || string[i] == 'A'){
            ocorrencia++;
            i++;
            continue;
        }
        i++;
    }

    if(ocorrencia){
        printf("A letra 'A' (maiúscula ou minúscula) aparece %d vezes na string\n", ocorrencia);
        return 0;
    }
    printf("A letra 'A' (maiúscula ou minúscula) não aparece na string");

    return 0;
}