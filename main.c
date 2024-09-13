#include "library.h"

static void add_book_test()
{
    t_book* head = NULL;
    head = add_book(head, "c", "b", 0);
    head = add_book(head, "d", "b", 0);
    head = add_book(head, "a", "b", 0);
    list_books(head);
    head = add_book(head, NULL, "b", 0);
    free_library(head);
    printf("\n\n");
}

static void search_book_test()
{
    t_book* head = NULL;
    head = add_book(head, "c", "b", 0);
    head = add_book(head, "d", "b", 0);
    head = add_book(head, "a", "b", 0);
    search_book(head, "a");
    search_book(head, "f");
    free_library(head);
    printf("\n\n");
} 

static void remove_book_test()
{
    t_book* head = NULL;
    head = add_book(head, "c", "b", 0);
    head = add_book(head, "d", "b", 0);
    head = add_book(head, "a", "b", 0);
    list_books(head);
    remove_book(&head, "c");
    search_book(head, "c");
    free_library(head);
    printf("\n\n");
}

int main(void)
{
    add_book_test();
    search_book_test();
    remove_book_test();
}