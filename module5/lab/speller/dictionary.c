// Implements a dictionary's functionality
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

int number_words = 0;

// Number of buckets in hash table
const unsigned int N = 1;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    return 0;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        table[i] = NULL;
    }

    FILE *dict_file = fopen(dictionary, "r");

    if (dict_file == NULL)
    {
        printf("Was not able to open dictionary\n");
        return false;
    }
    char buffer[45];

    while (fscanf(file, "%s", buffer))
    {
        node *new_word = malloc(sizeof(node));
        int hash_value = hash(buffer);
        strcpy(new_word->word, buffer);
        new_word->next = table[hash_value];
        table[hash_value] = new_word;
    }
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
