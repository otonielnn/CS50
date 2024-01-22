#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(int argc, int argv[])
{
    if (isdigit(argv[1]) == 0){
        printf("Usage: ./caesar key");
    }
    else {
        string text = get_string("Text: ");
        string encipher = "";
    }
}
