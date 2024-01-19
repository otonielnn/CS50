#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    int count = 0;
    printf("Output: ");
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        printf("%c", s[i]);
        count += 1;
    }
    printf("\nNumber of letters: %i\n", count);
}
