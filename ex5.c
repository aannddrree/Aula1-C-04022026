#include <stdio.h>

int main(){ 
    int n, s = 0;
    printf("Inserir números (0 para terminar): ");
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        s += n;
    }
    printf("Soma: %d\n", s);
    return 0;
}