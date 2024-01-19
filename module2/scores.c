#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int total = get_int("Total number of scores: ");
    int scores[total];
    float sum = 0;
    for (int i = 0; i < total; i++)
    {
        scores[i] = get_int("%dº Score: ", i + 1);
    }

    for (int i = 0; i < total; i++)
    {
        sum += scores[i];
    }

    float avg = sum / total;

    printf("Average: %f\n", avg);
}
