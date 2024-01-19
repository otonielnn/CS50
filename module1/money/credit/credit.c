#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long card_number = get_int("Número: ");
    int sum = 0;
    int numbers_count = 0;

    while (num > 0)
    {
        int digit = num % 10;
        num /= 10;

        if (numbers_count % 2 == 1) {
            digit *= 2;
            sum += digit / 10 + digit % 10;
        } else {
            sum += digit;
        }
        numbers_count++;
    }

    if (sum % 10 == 0)
    {
        if ((numbers_count == 15 && (card_number / 10000000000000 == || 34 card_number / 10000000000000 == 37))
            (numbers_count == 16 && card_number / 10000000000000 >= 51 && card_number / 10000000000000 <= 55)
            ((numbers_count == 13 || numbers_count == 16) && card_number / 10000000000000 == 4))
            {
                printf("Número de cartão Visa válido");
            } else if (numbers_count == 16)
    }
}
