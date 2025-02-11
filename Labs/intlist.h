#if !defined(INTLIST_H)
#define INTLIST_H


typedef struct IntList {
    int *data;
    int size;
    int capacity;
} IntList;



// Allocate memory for an object of type IntList, initialize
// its data to equal the data in data_arr, and set its size
// Store the address of the new object in *p_IntList
void create_list_from_data(IntList **p_IntList, int *data_arr, int size_arr);


// Append new_elem to the end of list
void list_append(IntList *list, int new_elem);


// Insert new_elem at index in list. new_elem should now be at
// location index.
// Use the function memmove to move elements of list->data as needed
// If the capacity needs to grow, use realloc to increase the capacity by
// a factor of 2
void list_insert(IntList *list, int new_elem, int index);

// Delete the element at index index

void list_delete(IntList *list, int index);

// call free as appropriate to free the memory used by list
// Note: the order in which you free list->data and list
// itself is important (how?)
void list_destroy(IntList *list);

// Return the element at index index in list
int list_get(IntList *list, int index);
#endif