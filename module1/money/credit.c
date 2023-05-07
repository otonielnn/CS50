#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int card = 0;
    while (card < 0)
    {
        card = get_float("Write your credit card number: ");
    }

    printf("%i\n", card[0])
}
