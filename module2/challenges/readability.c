#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
        else if (isblank(text[i]))
        {
            words++;
        }
        else if (ispunct(text[i]))
        {
            sentence++;
        }
    }
    
    words++;
    sentence++;
    float L = ((float)words / (float)letters) * 100;
    float S = ((float)sentence / (float)words) * 100;
    float indice = 0.0588 * L - 0.296 * S - 15.8;
    int grade = indice;

    if (grade < 0) {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else {
        printf("Grade %i\n", grade);
    }
}
