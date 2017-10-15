#include <stdio.h>
#include <stdlib.h>
#include "my_header.h"

int main() {
    struct node *n;
    printf("Inserting nodes with chars \'c\', \'b\', and \'a\', in that order\n");
    n = insert_front(0, 'c');
    n = insert_front(n, 'b');
    n = insert_front(n, 'a');
    
    print_list(n);
    
    printf("Freeing list\n");
    struct node *new = free_list(n);
    print_list(new);
    return 0;
}
