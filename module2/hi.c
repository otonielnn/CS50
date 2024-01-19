#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    string s = "HI!";
    string t = "BYE!";

    printf("%c%c%c\n", c1, c2, c3);
    printf("%i %i %i\n", c1, c2, c3);
    printf("%s\n", s);
    printf("%i %i %i\n", s[0], s[1], s[2]);
    printf("%c\n", s[1]);
    printf("%i\n", s[1]);

    printf("%s\n", t);
    }
