#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O numero %d e par.\n", n);
    } else {
        printf("O numero %d e impar.\n", n);
    }

    return 0;
}