#include <cs50.h>
#include <ctype.h>
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
                printf("%c", (((s[i] - 'a') + key) % 26) + 'a');
            }
            else if (text[i] >= 'A' && text[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + key) % 26) + 'A');
            }
            else
            {
                print("%c", text[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        print("Usage: ./caesar key");
        return 1;
    }
}
