#include <stdio.h>

int main(void)
{
    int scores[3];
    scores[0] = get_int("1º Score: ");
    scores[1] = get_int("2º Score: ");
    scores[2] = get_int("3º Score: ");
    float sum = scores[0] + scores[1] + scores[2];

    printf("Average: %f\n", avg / 3.);
}
