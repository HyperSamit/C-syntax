#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Lab3.h"


void print_student(student1 student){
    printf("%s\n%s\n%d\n", student.name, student.student_number, student.year);
}

void set_default_name(student1 *p_s){
    strcpy(p_s -> name, "Default Student");
    p_s -> year = 0;
}

void create_block1(student1 **p_p_s, int n_students){
    *p_p_s = (student1 *)malloc(sizeof(student1) * n_students);
}

void set_name(student1 *p_s, char name1[]){
    int i;
    for(i = 0; (i < 200) & (name1[i] != '\n'); i++){
        (*p_s).name[i] = name1[i];
    }
    p_s -> name[i] = '\0';

    
}

void destroy_block1(student1 *p_s){
    free(p_s);
    p_s = NULL;
}

// STUDENT 2

typedef struct student2{
    char *name;
    char *student_number;
    int year;
} student2;

void create_block2(student2 **p_p_s, int num_students){
    *p_p_s = (student2 *)malloc(sizeof(student2) * num_students);
    student2 *p_s = *p_p_s;
    for(int i = 0; i < num_students; i++){
        p_s[i].name = NULL;
        p_s[i].student_number = NULL;
    }
}

void set_name2(student2 *p_s, char *input){
    p_s[0].name = (char *)malloc(200);
    strcpy(p_s -> name, input);
}

void destroy_block2(student2 *p_s, int size){
    for (int i = 0; i < size; i++){
        free(p_s[i].name);
        free(p_s[i].student_number);
    }
    free(p_s);
    p_s = NULL;
}

int main(){
    student1 student = {"Samit", "12345678901", 2028};
    printf("size of student 1: %lld\n", sizeof(student));
    print_student(student);

    set_default_name(&student);
    print_student(student);

    student1 *p_s = NULL;
    create_block1(&p_s, 3);
    set_name(p_s, "Sam");
    printf("%s\n", p_s->name);
    destroy_block1(p_s);

    // Student 2
    student2 *p_s2 = NULL;
    create_block2(&p_s2, 3);
    set_name2(p_s2, "Samithu");
    printf("%s\n", p_s2[0].name);


    return 0;
}