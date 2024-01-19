#include <stdio.h>
#include <string.h>

int luhnCheck(char* cardNumber) {
    int len = strlen(cardNumber);
    int sum = 0;
    int isSecond = 0;

    // Percorre os dígitos do cartão de crédito da direita para a esquerda
    for (int i = len - 1; i >= 0; i--) {
        int digit = cardNumber[i] - '0';

        if (isSecond) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        isSecond = !isSecond;
    }

    // O número é válido se a soma for divisível por 10
    return (sum % 10 == 0);
}

int main() {
    char cardNumber[20];

    printf("Digite o número do cartão de crédito: ");
    scanf("%s", cardNumber);

    if (luhnCheck(cardNumber)) {
        printf("O número do cartão é válido.\n");
    } else {
        printf("O número do cartão é inválido.\n");
    }
}
