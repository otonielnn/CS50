#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int card = 0;
    while (card < 0)
    {
        card = get_float("Write your credit card number: ");
    }
    int digit = (int)log1(card)+ 1;
    int divisor = (long)pow(10, digit - 2);
    int first_two_digits = (int)floor(card/divisor);
    int n1, n2, soma, resultado = 0;

    do
    {
        n1 = card % 10;
        card /= 10;
        n2 = card % 10 * 2;
        if (n2 > 9)
        {
            int n3;
            n3 = n2 % 10;
            n2 /= 10;
            n2 += n3;
        }
        soma = n1 + n2;
        card /= 10;
        resultado += soma
    }
    while (cartao > 0);

    resultado %= 10;

    if (resultado == 0)
    {
        if (first_two_digits == 34 || first_two_digits == 37)
        {
            printf("AMEX\n");
        }
        else if (first_two_digits > 50 && first_two_digits < 56)
        {
            printf("MASTERCARD\n");
        }
        else if (first_two_digits / 10 == 4 && digit > 12)
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

    return 0;
}
