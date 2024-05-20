// Implements a dictionary's functionality
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

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

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned int hash = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        hash = (hash << 2) ^ word[i];
    }
    return hash % N;
}

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int hash_value = hash(word);
    node *cursor = table[hash_value];
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        else
        {
            cursor = cursor->next;
        }
    }
    return false;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *dict_file = fopen(dictionary, "r");
    if (dict_file == NULL)
    {
        printf("Was not able to open dictionary\n");
        return false;
    }

    char buffer[LENGTH + 1];
    while (fscanf(dict_file, "%s", buffer) != EOF)
    {
        node *new_word = malloc(sizeof(node));
        if (new_word == NULL)
        {
            fclose(dict_file);
            return false;
        }
        int hash_value = hash(buffer);
        strcpy(new_word->word, buffer);
        new_word->next = table[hash_value];
        table[hash_value] = new_word;
        number_words++;
    }

    fclose(dict_file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return number_words;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *cursor = table[i];
        while (cursor != NULL)
        {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
    }
    return true;
}
