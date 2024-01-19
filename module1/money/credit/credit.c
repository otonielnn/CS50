#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long cardNumber;

    do
    {
        cardNumber = get_long_long("Digite o número do cartão de crédito: ");
    } while (cardNumber <= 0);

    int sum1 = 0, sum2 = 0;
    int multiply = 0;

    while (cardNumber > 0)
    {
        int digit = cardNumber % 10;

        if (multiply)
        {
            digit *= 2;
            sum1 += digit / 10 + digit % 10;
        }
        else
        {
            sum2 += digit;
        }

        multiply = !multiply;
        cardNumber /= 10;
    }

    bool isValid = (sum1 + sum2) % 10 == 0;

    if (isValid)
    {
        if ((cardNumber == 34 || cardNumber == 37) && isValid)
        {
            printf("American Express\n");
        }
        else if ((cardNumber >= 51 && cardNumber <= 55) && isValid)
        {
            printf("MasterCard\n");
        }
        else if ((cardNumber / 1000000000000 == 4 || cardNumber / 100000000000000 == 4) && isValid)
        {
            printf("Visa\n");
        }
        else
        {
            printf("Cartão de crédito válido, mas a bandeira não foi identificada.\n");
        }
    }
    else
    {
        printf("Cartão de crédito inválido!\n");
    }
}
