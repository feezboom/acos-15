#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    char *key;
    void* value;
    struct Node *next;

}Node;

typedef struct HashTable
{
    size_t size;
    size_t NumberOfElements;
    struct Node** array;
}Hashtable;

Hashtable *CreateHashtable(size_t size);
int hash(char* string, int size);
void InsertData(Hashtable *hashtable, char *key,const void* value);
void* GetData(Hashtable *hashtable, char *key);
void DeleteData(Hashtable *hashtable, char *key);
void DeleteHashtable(Hashtable *hashtable);
Hashtable *ExpandTable(Hashtable *table);
void Copy(Hashtable* hashtable, Hashtable* new);