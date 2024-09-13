#include "library.h"

/*Custom function to dynamically copy a string.
On success, it returns a pointer to the string; on failure, it returns NULL.*/
char*   strdup(const char* source)
{
    int     i;
    int     len;
    char*   str;

    i = 0;
    len = strlen(source);
    str = (char*)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while(source[i])
    {
        str[i] = source[i];
        i++;
    }
    str[i] = 0;
    return (str);
}
/*Creates a new node and inserts it into the list in alphabetical order.
On success, returns a pointer to the head of the list; on failure, returns NULL.*/
t_book* add_book(t_book* head, const char* title, const char* author, const int year)
{
    t_book* new_book = NULL;
    t_book* tmp = head;

    if(!title || !author)
    {
        fprintf (stderr, "Error: you must complete all the fields\n");
        return (NULL);
    }
    new_book = (t_book*)malloc(sizeof(t_book));
    if(!new_book)
    {
        fprintf(stderr, "Error: memory couldn't be allocated\n");
        return (NULL);
    }
    new_book->author = strdup(author);
    if(!new_book->author)
    {
        fprintf(stderr, "Error: memory couldn't be allocated\n");
        return (NULL);
    }
    new_book->title = strdup(title);
    if(!new_book->title)
    {
        fprintf(stderr, "Error: memory couldn't be allocated\n");
        return (NULL);
    }
    new_book->year = year;
    new_book->next = NULL;
    if(!head || strcmp(tmp->title, new_book->title) > 0)
    {
        new_book->next = tmp;
        return(new_book);
    }
    while(tmp && strcmp(tmp->title, new_book->title) > 0)
    {
        tmp = tmp->next;
    }
    new_book->next = tmp->next;
    tmp->next = new_book;
    return(head);
}


/*Displays the list of books*/
void list_books(t_book* head)
{
    while(head)
    {
        printf("Title: %s, Author: %s, Year: %d\n", head->title, head->author, head->year);
        head = head->next;
    }
}