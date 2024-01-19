#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    int total = get_int("Total number of scores: ");
    int scores[total];
    float sum = 0;
    for (int i = 0; i < total; i++)
    {
        scores[i] = get_int("%dº Score: ", i + 1);
    }

    printf("Average: %f\n", average(total, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;
}
