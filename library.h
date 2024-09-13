#ifndef LIBRARY_H
# define LIBRARY_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_book
{
    char*   title;
    char*   author;
    int     year;
    struct  s_book* next;
}               t_book;

t_book* add_book(t_book* head, const char* title, const char* author, const int year);
void    list_books(t_book* head);
void    search_book(t_book* head, char* title);
void    free_library(t_book* head);
void    print_book(t_book* book);
void    remove_book(t_book** head, char* title);
void*    exit_failure(t_book* head, char* message);

#endif