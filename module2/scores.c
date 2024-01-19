#include <stdio.h>

int main(void)
{
    int score1 = get_int("");
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
}
