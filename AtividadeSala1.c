#include <stdio.h>

int main() {
    float velocidade, limite;
    float excesso, percentual;

    printf("Digite a velocidade do carro (km/h): ");
    scanf("%f", &velocidade);

    printf("Digite o limite da via (km/h): ");
    scanf("%f", &limite);

    excesso = velocidade - limite;

    if (excesso <= 0) {
        printf("\nStatus: OK\n");
        printf("Velocidade dentro do limite.\n");
    } else {
        percentual = (excesso / limite) * 100;

        printf("\nVelocidade acima do limite: %.2f km/h\n", excesso);

        if (percentual <= 10) {
            printf("Multa leve - Valor: R$ 130,00\n");
        } else if (percentual <= 20) {
            printf("Multa media - Valor: R$ 195,00\n");
        } else {
            printf("Multa grave - Valor: R$ 880,00\n");
        }
    }

    return 0;
}
