#include "library.h"

static void simple_test()
{
    t_book* head = NULL;
    head = add_book(head, "c", "b", 0);
    head = add_book(head, "d", "b", 0);
    head = add_book(head, "a", "b", 0);
    list_books(head);
}

int main(void)
{
    simple_test();
}