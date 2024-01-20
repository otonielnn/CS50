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
    float indice = 0.0588 * (((float)words / (float)letters) * 100) - 0.296 * (((float)sentence / (float)words) * 100) - 15.8;
    int grade = indice;
    printf("Letters: %i\n", letters);
    printf("Words: %i\n", words);
    printf("Sentence: %i\n", sentence);
    printf("indice: %i\n", grade);
}
