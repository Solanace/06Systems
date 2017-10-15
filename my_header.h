struct node {
    char c;
    struct node *next;
};
void print_list(struct node *n);
struct node *insert_front(struct node *n, char c);
struct node *free_list(struct node *n);
