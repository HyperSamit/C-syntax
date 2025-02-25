#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lab6.h"

void LL_append(LL *my_list, int new_elem)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = new_elem;
    ptr->next = NULL;
    if (my_list->head == NULL)
    {
        my_list->head = ptr;
    }
    else
    {
        node *temp = my_list->head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

int validate_list_length(LL *my_list, int length)
{
    node *temp = my_list->head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count == length; 
}

void delete_node(LL *my_list, int index){
    node *temp = my_list->head;
    for(int i = 0; i <= index; i++){
        if (i == index-1){
            node *temp2 = temp->next;
            temp->next = temp2->next;
            free(temp2);
            return;
        }
        temp = temp->next;
    }
}

void print_list(LL *my_list){
    node *temp = my_list->head;
    while (temp != NULL){
        printf("%d: %p\n", temp->data, temp->next);
        temp = temp->next;
    }
}

int main() {
    // Your code here
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    LL my_list;
    my_list.head = NULL;
    my_list.size = 0;
    for (int i = 0; i < sizeof(list)/sizeof(int); i++)
    {
        LL_append(&my_list, list[i]);
    }
    print_list(&my_list);
    printf("validation : %d\n", validate_list_length(&my_list, 10));
    delete_node(&my_list, 5);
    print_list(&my_list);

    return 0;
}