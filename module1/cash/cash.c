#include <stdio.h>
#include <cs50.h>
//25, 10, 5 ,1

int main(void)
{
    float valor = -1;
    int total_coins = 0;

    while (valor < 0)
    {
        valor = get_float("Valor: ");
    }

    while (valor > 0.25)
    {
        valor -= 0.25;
        total_coins += 1;
        printf("%i\n", total_coins); // OK - 1
    }

    while (valor > 0.10)
    {
        valor -= 0.10;
        total_coins += 1;
        printf("%i\n", total_coins); //OK - 2
    }

    while (valor > 0.05)
    {
        valor -= 0.05;
        total_coins += 1;
        printf("%i\n", total_coins); // - 3
    }
    print(f("%f\n", valor));
    while (valor > 0.01)
    {
        valor -= 0.01;
        total_coins += 1;
        printf("%i\n", total_coins); // - 3
    }
    printf("%i\n", total_coins);
}