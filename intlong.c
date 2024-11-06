#include <stdio.h>

int main(){
    int numeronormal = 2147483647; // valor máximo de int
    long int numerogrande = 2147483647;

    printf("numero regular (int): %d\n", numeronormal);
    printf("numero grande (long int): %ld\n", numerogrande);

    numerogrande = 2147483648; // valor maior que o maximo de int
    printf("numero grande atualizado (long int): %ld\n", numerogrande);

    return 0;


}