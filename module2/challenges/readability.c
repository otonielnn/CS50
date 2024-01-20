#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    int words = 0;
    int sentence = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }

        if (text[i] == ' ')
        {
            words++;
        }

        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence++;
        }
    }

    words++;
    float L = ((float)letters / (float)words) * 100;
    float S = ((float)sentence / (float)words) * 100;
    float indice = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(indice);

    if (grade < 1) {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else {
        printf("Grade %i\n", grade);
    }
    printf("%d", sentence);
}
