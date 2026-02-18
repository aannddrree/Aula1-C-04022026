#include <stdio.h>

int main(){
    char op;
    double num1, num2, result;

    printf("Digite a operação (+, -, *, /): ");
    scanf("%c", &op);
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Resultado: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %.2lf\n", result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Resultado: %.2lf\n", result);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
    }
    return 0;
}