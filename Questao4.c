#include <stdio.h>
#include <math.h>

int letra_a(){
    int ultimo = 1;

    for(int i = 0; i < 4; i++){
        ultimo += 2;
    }
    return ultimo;
}

int letra_b(){
    int ultimo = 2;

    for(int i = 0; i < 6; i++){
        ultimo = ultimo * 2;
    }
    return ultimo;
}

int letra_c(){
    int ultimo = 0;

    for(int i = 1; i < 15; i += 2){
        ultimo = ultimo + i;
    }
    return ultimo;
}

int letra_d(){
    int ultimo = 4;

    for(int i = 12; i < 44; i += 8){
        ultimo = ultimo + i;
        printf("%d\n", ultimo);
    }
    return ultimo;
}

    int letra_e(int n){
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return letra_e(n - 1) + letra_e(n - 2);
    }

int letra_f(){
    int sequencia[] = {2, 10, 12, 16, 17, 18, 19};
    int n = sizeof(sequencia) / sizeof(sequencia[0]);
    int diferenca = sequencia[n - 1] - sequencia[n - 2];
    int ultimo = sequencia[n - 1] + diferenca;

    return ultimo;
}

int main(){
    int n = 7;
    int resposta_a = letra_a();
    int resposta_b = letra_b();
    int resposta_c = letra_c();
    int resposta_d = letra_d();
    int resposta_e = letra_e(n);
    int resposta_f = letra_f();

    printf("Resposta Letra A: %d\n", resposta_a);
    printf("Resposta Letra B: %d\n", resposta_b);
    printf("Resposta Letra C: %d\n", resposta_c);
    printf("Resposta Letra D: %d\n", resposta_d);
    printf("Resposta Letra E: %d\n", resposta_e);
    printf("Resposta Letra F: %d\n", resposta_f);
}