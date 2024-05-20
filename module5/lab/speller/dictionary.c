#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
#define N 65536

// Hash table
node *table[N];

// Number of words loaded in the dictionary
int word_count = 0;

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // Convert word to lowercase
    char lower_word[strlen(word) + 1];
    for (int i = 0; i < strlen(word); i++)
    {
        lower_word[i] = tolower(word[i]);
    }
    lower_word[strlen(word)] = '\0';

    // Hash word to obtain hash value
    unsigned int hash_value = hash(lower_word);

    // Access linked list at that index in the hash table
    node *cursor = table[hash_value];

    // Traverse linked list, looking for the word (case-insensitive comparison)
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, lower_word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }

    return false;
}

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

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Open dictionary file
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        printf("Could not open %s.\n", dictionary);
        return false;
    }

    // Buffer to store word read from file
    char word[LENGTH + 1];

    // Read strings from file one at a time
    while (fscanf(file, "%s", word) != EOF)
    {
        // Create a new node for each word
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            fclose(file);
            unload();
            return false;
        }
        strcpy(new_node->word, word);

        // Hash word to obtain hash value
        unsigned int hash_value = hash(word);

        // Insert node into hash table at that location
        new_node->next = table[hash_value];
        table[hash_value] = new_node;

        // Update word count
        word_count++;
    }

    // Close dictionary file
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return word_count;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // Iterate over each bucket in the hash table
    for (int i = 0; i < N; i++)
    {
        // Cursor to traverse the linked list
        node *cursor = table[i];

        // Free each node in the linked list
        while (cursor != NULL)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
    }

    // Indicate success
    return true;
}
