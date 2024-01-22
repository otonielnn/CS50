#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i] == false))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        int key = atoi(argv[1]);
        if (isalpha(key))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        
        string text = get_string("Text: ");

        printf("ciphertext: ");

        for (int i = 0; i < strlen(text); i++)
        {
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                printf("%c", (((text[i] - 'a') + key) % 26) + 'a');
            }
            else if (text[i] >= 'A' && text[i] <= 'Z')
            {
                printf("%c", (((text[i] - 'A') + key) % 26) + 'A');
            }
            else
            {
                printf("%c", text[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
