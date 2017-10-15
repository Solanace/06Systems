#include <stdio.h>
#include <stdlib.h>
#include "my_header.h"

void print_list(struct node *n) {
    printf("Printing list: {");
    if (n) {
        while (n->next) {
            printf("%c, ", n->c);
            n = n->next;
        }
        printf("%c}\n", n->c);
    }
    else {printf("}\n");}
}

struct node *insert_front(struct node *n, char c) {
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->c = c;
    new->next = n;
    return new;
}

struct node *free_list(struct node *n) {
    if (!n) {
        return n;
    }
    free_list(n->next);
    free(n);
    n = 0;
    return n;
}
