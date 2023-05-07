#include <stdio.h>
#include <cs50.h>
//25, 10, 5 ,1

int main(void)
{
    int valor = 0;
    int cents_25 = 0;
    int cents_10 = 0;
    int cents_5 = 0;
    int cents_1 = 0;
    int total_coins = 0;

    while (valor < 0)
    {
        valor = get_float("Valor: ");
    }

    while (valor > 0.25)
    {
        valor -= 0.25;
        cents_25 += 1;
    }

    while (valor > 0.10)
    {
        valor -= 0.10;
        cents_10 += 1;
    }

    while (valor > 0.05)
    {
        valor -= 0.05;
        cents_5 += 1;
    }

    while (valor > 0.01)
    {
        valor -= 0.01;
        cents_1 += 1;
    }

    total_coins = cents_25 + cents_10 + cents_5 + cents_1;
    printf(total_coins);
}