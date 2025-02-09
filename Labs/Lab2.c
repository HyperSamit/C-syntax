#include <stdio.h>

//Question 1
void set_even_to_zero(int *block, int size){
    int compare = 1;
    for(int i = 0; i < size; i++){
        if((i&compare) != 1){
            block[i] = 0;
        }
        else{
            continue;
        }
    }
}

//Question 2
void strconcat(char *destination, const char *source){
    int i = 0;
    int str1len = 0;

    while(destination[str1len] != '\0'){
        str1len++;
    }
    while(source[i] != '\0'){
        destination[i + str1len] = source[i];
        i++;
    }
    destination[i + str1len] = '\0';
}

void strconcat2(char *destination, char *source){

    while(*destination){
        destination++;
    }

    do{
        *destination = *source;
        destination++;
        source++;
    }while(*source);
    
}

// Question 3
int strcomp(char *str1, char *str2){
    int asciivalue = (int)*str1;
    printf("value of str1: %d\n", asciivalue);
    while(*str1 & *str2){
        if((int)*str1 == (int)*str2){
            str1++;
            str2++;
        }
        else if((int)*str1 > (int)*str2){
            return 1;
        }
        else{
            return -1;
        }
    }
    return 0;
}

int my_atoi(char *str){
    int num = 0;
    while(*str){
        num *= 10;
        num += (*str - '0') ;
        str++;
    }
    return num;
}

int main(){

    int num_block[] = {5, 6, 7, 8};
    set_even_to_zero(num_block, 4);
    for(int num = 0; num < 4; num++){
        printf("%d\n", num_block[num]);
    }

    //Question 2
    char string1[] = "Samit";
    char string2[] = "Chenchu";
    strconcat(string1, string2);
    printf("%s\n", string1);

    char string3[] = "Lakshmi";
    char string4[] = " Kuppam";
    strconcat2(string3, string4);
    printf("%s\n", string3);

    // Question 3
    char str1[] = "abcd";
    char str2[] = "abCd";
    printf("strcomp = %d\n", strcomp(str1, str2));

    // Question 5
    printf("atoi = %d\n", my_atoi("1234"));

    return 0;
}