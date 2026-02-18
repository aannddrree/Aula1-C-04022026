#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char senha[100];
    int temMaiuscula = 0;
    int temNumero = 0;
    int temEspecial = 0;
    int tamanhoValido = 0;

    printf("Digite sua senha: ");
    fgets(senha, sizeof(senha), stdin);

    // Remove o '\n' que o fgets pode adicionar
    senha[strcspn(senha, "\n")] = '\0';

    int tamanho = strlen(senha);

    // Verifica tamanho mínimo
    if (tamanho >= 8) {
        tamanhoValido = 1;
    }

    // Percorre a senha verificando os critérios
    for (int i = 0; i < tamanho; i++) {
        if (isupper(senha[i])) {
            temMaiuscula = 1;
        }
        else if (isdigit(senha[i])) {
            temNumero = 1;
        }
        else if (!isalnum(senha[i])) {
            temEspecial = 1;
        }
    }

    printf("\n=== Resultado da Validação ===\n");

    if (tamanhoValido && temMaiuscula && temNumero && temEspecial) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida!\n");

        if (!tamanhoValido)
            printf("- Deve ter pelo menos 8 caracteres\n");

        if (!temMaiuscula)
            printf("- Deve ter pelo menos 1 letra maiúscula\n");

        if (!temNumero)
            printf("- Deve ter pelo menos 1 número\n");

        if (!temEspecial)
            printf("- Deve ter pelo menos 1 caractere especial (!@#$%%...)\n");
    }

    return 0;
}