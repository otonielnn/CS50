#include <stdio.h>
#include <cs50.h>

void torre(int n);

int main(void)
{
    int n = 0;
    while (n < 1 || n > 8)
    {
        n = get_int("Height: ");
    }
    torre(n);
}

void torre(int n)
{
    for (int l = 1; l <= n; l++)
    {
        for (int d = n; d > l; d--)
        {
            if (l != 0)
            {
                printf(" ");
            }
        }

        for (int h = 1; h <= l; h++)
        {
            printf("#");
        }

        if (l != 0)
        {
            printf("..");
        }

        for (int d = n; d > l; d--)
        {
        }

        for (int h = 1; h <= l; h++)
        {
            printf("#");
        }

        printf("\n");
    }
}