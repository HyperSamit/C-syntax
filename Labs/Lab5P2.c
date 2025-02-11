#include <stdio.h>
#include <stdlib.h>
#include "intlist.h"

void list_append_2(IntList *list, int new_elem){
    if (list->size == list->capacity) {
        list->capacity += 1;
        list->data = realloc(list->data, sizeof(int) * list->capacity);
    }
    list->data[list->size] = new_elem;
    list->size++;
    
    return;
}

void list_insert_2(IntList *list, int new_elem, int index){
    if (list->size == list->capacity) {
        list->capacity += 1;
        list->data = realloc(list->data, sizeof(int) * list->capacity);
    }
    for (int i = list->size; i > index; i--) {
        list->data[i] = list->data[i - 1];
    }
    list->data[index] = new_elem;
    list->size++;

    
    return;
}

void list_delete_2(IntList *list, int index){
    for (int i = index; i < list->size - 1; i++){
        list->data[i] = list->data[i + 1];
    }
    list->size--;

    if (list->size < list->capacity / 2) {
        list->capacity /= 2;
        list->data = realloc(list->data, sizeof(int) * list->capacity);
    }

    return;
}
