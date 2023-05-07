#include <stdio.h>
#include <cs50.h>
//25, 10, 5 ,1

int main(void)
{
    float valor = -1;
    int coins = 0;

    while (valor < 0)
    {
        valor = get_float("Valor: ");
    }

    while (valor >= 0.25)
    {
        valor -= 0.25;
        coins += 1;
    }

    while (valor >= 0.10)
    {
        valor -= 0.10;
        coins += 1;
    }

    while (valor >= 0.05)
    {
        valor -= 0.05;
        coins += 1;
        printf("%i\n", coins); // - 3
    }
    printf("%f\n", valor);
    while (valor < 0.01)
    {
        valor -= 0.01;
        coins += 1;
    }
    printf("%f\n", valor);
    printf("%i\n", coins);
}