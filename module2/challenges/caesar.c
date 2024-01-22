#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (isdigit(*argv[1]))
    {
        int key = atoi(argv[1]);
        string text = get_string("Text: ");

        for (int i = 0; i < strlen(text); i++)
        {
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') +)))
            }
        }
    }
}
