#include <stdio.h>
#include <cs50.h>

int count_digits(long long number)
{
    int count = 0;
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

int main(void)
{
    long long cardNumber;

    // Obtenha o número do cartão de crédito do usuário
    do
    {
        cardNumber = get_long_long("Digite o número do cartão de crédito: ");
    } while (cardNumber <= 0);

    // Verificar a quantidade correta de dígitos
    int numDigits = count_digits(cardNumber);
    if (numDigits != 13 && numDigits != 15 && numDigits != 16)
    {
        printf("Número de cartão de crédito inválido (número incorreto de dígitos).\n");
        return 1;
    }

    // Variáveis para armazenar a soma dos dígitos
    int sum1 = 0, sum2 = 0;

    // Variável para controlar se estamos multiplicando por 2 ou não
    int multiply = numDigits % 2;

    // Iterar sobre os dígitos do número do cartão
    while (cardNumber > 0)
    {
        // Obter o dígito mais à direita
        int digit = cardNumber % 10;

        // Se estamos multiplicando por 2 neste passo
        if (multiply)
        {
            // Multiplicar por 2 e adicionar os dígitos do produto
            digit *= 2;
            sum1 += digit / 10 + digit % 10;
        }
        else
        {
            // Adicionar ao segundo conjunto de dígitos
            sum2 += digit;
        }

        // Alternar entre multiplicar por 2 e não multiplicar
        multiply = !multiply;

        // Remover o dígito mais à direita
        cardNumber /= 10;
    }

    // Verificar se o número é válido de acordo com o algoritmo de Luhn
    bool isValid = (sum1 + sum2) % 10 == 0;

    // Identificar a bandeira do cartão
    if (isValid)
    {
        // Ajustar o número do cartão para os primeiros dígitos
        long long firstDigits = cardNumber;
        while (firstDigits > 100)
        {
            firstDigits /= 10;
        }

        // Verificar os primeiros dígitos para determinar a bandeira
        if ((firstDigits == 34 || firstDigits == 37) && numDigits == 15)
        {
            printf("AMEX\n");
        }
        else if ((firstDigits >= 51 && firstDigits <= 55) && numDigits == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((firstDigits / 10 == 4 || firstDigits / 100 == 4) &&
                 (numDigits == 13 || numDigits == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}
