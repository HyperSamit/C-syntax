#ifndef LAB6_H
#define LAB6_H

// Function declarations
typedef struct node{
    int data;
    struct node *next;
} node;

typedef struct LL{
    node *head;
    int size;
} LL;

void LL_append(LL *my_list, int new_elem);
int validate_list_length(LL *my_list, int length);
void delete_node(LL *my_list, int index);
void print_list(LL *my_list);

#endif // LAB6_H