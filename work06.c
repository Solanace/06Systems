#include <stdio.h>
#include <stdlib.h>

struct node {
    char c;
    struct node *next;
};

void print_list(struct node *n) {
    while (n->next) {
        printf("%c\n", n->c);
        n = n->next;
    }
}

struct node *insert_front(struct node *n, char add_me) {
}
