#include <stdio.h>

int main(){
    // Tabuada de um número passado via scanf
    int num;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}