#include "library.h"

static void add_book_test()
{
    t_book* head = NULL;
    head = add_book(head, "c", "b", 0);
    head = add_book(head, "d", "b", 0);
    head = add_book(head, "a", "b", 0);
    list_books(head);
    free_library(head);
}

void search_book_test()
{
    t_book* head = NULL;
    head = add_book(head, "c", "b", 0);
    head = add_book(head, "d", "b", 0);
    head = add_book(head, "a", "b", 0);
    search_book(head, "a");
    search_book(head, "f");
} 



int main(void)
{
    add_book_test();
    search_book_test();
}