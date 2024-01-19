#include <cs50.h>
#include <stdio.h>

/* compilado usando:  clang -o hello hello.c -lcs50 */
int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello %s\n", name);
}
