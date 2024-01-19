#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Solicite o valor inicial ao usuário
    int start, end, years = 0;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Solicite o valor final ao usuário
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // TODO: Calcule o número de anos até o limite
    while (start < end)
    {
        int born = start / 3;
        int died = start / 4;
        start += born;
        start -= died;
        years += 1;
    }

    // TODO: Imprima o número de anos
    printf("Years: %i\n", years);
}
