#include <stdio.h>
#include <cs50.h>

void torre(int n);

int main(void)
{
    int n = 0;
    while (n < 0)
    {
        n = get_int("Height: ");
    }
    torre(n);
}

void torre(int n)
{
    for (int l = 0; l < n; l++)
    {
        for (int d = n; d > l + 1; d--)
        {
            if (l != 0)
            {
                printf(" ");
            }
        }

        for (int h = 0; h < l; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}