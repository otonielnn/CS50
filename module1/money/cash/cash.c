#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float valor = -1;

    while (valor < 0)
    {
        valor = get_float("Valor: ");
    }

    int cents = round(valor * 100), coins = 0;

    do
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins += 1;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins += 1;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins += 1;
        }
        else
        {
            cents -= 1;
            coins += 1;
        }
        printf("%i\n", cents);
    }
    while (cents > 0);
    printf("%i\n", coins);
}
