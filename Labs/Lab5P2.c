#include <stdio.h>
#include <stdlib.h>
#include "intlist.h"

void create_list_from_data(IntList **p_IntList, int *data_arr, int size_arr){
    *p_IntList = malloc(sizeof(IntList));
    (*p_IntList)->data = malloc(sizeof(int) * size_arr);
    (*p_IntList)->size = size_arr;
    (*p_IntList)->capacity = size_arr;
    for (int i = 0; i < size_arr; i++){
        (*p_IntList)->data[i] = data_arr[i];
    }
    return;
}

void list_append(IntList *list, int new_elem){
    if (list->size == list->capacity) {
        list->capacity += 1;
        list->data = realloc(list->data, sizeof(int) * list->capacity);
    }
    list->data[list->size] = new_elem;
    list->size++;
    
    if (list->size < list->capacity / 2) {
        list->capacity /= 2;
        list->data = realloc(list->data, sizeof(int) * list->capacity);
    }
    return;
}

void list_insert(IntList *list, int new_elem, int index){
    if (list->size == list->capacity) {
        list->capacity += 1;
        list->data = realloc(list->data, sizeof(int) * list->capacity);
    }
    for (int i = list->size; i > index; i--) {
        list->data[i] = list->data[i - 1];
    }
    list->data[index] = new_elem;
    list->size++;

    if (list->size < list->capacity / 2) {
        list->capacity /= 2;
        list->data = realloc(list->data, sizeof(int) * list->capacity);
    }
    return;
}

void list_delete(IntList *list, int index){
    for (int i = index; i < list->size - 1; i++){
        list->data[i] = list->data[i + 1];
    }
    list->size--;
    return;
}

void list_destroy(IntList *list){
    free(list->data);
    free(list);
    printf("List destroyed\n");
    return;
}

int list_get(IntList *list, int index){
    return list->data[index];
}

int main() {
    // Your code here
    int data[] = {1, 2, 3, 4, 5};
    IntList *list;
    create_list_from_data(&list, data, 5);
    for(int i = 0; i < list->size; i++){
        printf("%d, ", list->data[i]);
    }
    printf("\n");

    list_append(list, 6);
    for(int i = 0; i < list->size; i++){
        printf("%d, ", list->data[i]);
    }
    printf("\n");

    list_insert(list, 7, 2);
    for(int i = 0; i < list->size; i++){
        printf("%d, ", list->data[i]);
    }
    printf("\n");

    list_delete(list, 3);
    for (int i = 0; i < list->size; i++){
        printf("%d, ", list_get(list, i));
    }
    printf("\n");

    list_destroy(list);
    return 0;
}