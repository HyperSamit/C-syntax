#include <stdio.h>

struct Player{
    char name[25];
    int score;
};

typedef char user[25];

typedef struct{
    char email[25];
    int id;
} User;

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7}; 
//Sets each name to an integer starting from 0, can also be set manually

int main(){
    /*
        Welcome to Samit's Hello World file PART 2!!!!!!
        This file is continuation of the previous Hello World file, 
        allowing for far easier debugging and less printing issues
        HOPE THIS HELPS!!!!
    
    */

    // array = a data structure that can store many values of the same data type
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    // printing arrays
    for(int price = 0; price < 5; price++){
        printf("$%.2lf\n", prices[price]);
    }
    //or use sizeof(), which returns the amount of storage the array has used
    printf("%d bytes\n", sizeof(prices));

    // Dividint the storage space used by the array by the storage space used by one element,
    // it is possible to automate finding the array size!!
    for(int price = 0; price < sizeof(prices)/sizeof(prices[0]); price++){
        printf("$%.2lf\n", prices[price]);
    }

    /*
        2D arrays = an array, where each element is an entire array
                    useful if you need a matrix, grid, or table of data
    */
    
    // YOU HAVE TO define the size of a 2D Matrix unlike a 1D array
    // array[rows][columns]
    int numbers[2][3] = {
                        {1,2,3},
                        {4,5,6}
                        };
    
    // printing 2d arrays
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("\n");
    printf("2d Array: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    //Struct = collection of related members ("variables")
    //         they can be different data types 
    //         listed under one name in a block of memory
    //         SEE line 3 for struct syntax
    
    struct Player player1 = {"Samit",5};
    struct Player player2 = {"Sam", 4};

    printf("%s, score: %d\n", player1.name, player1.score);
    printf("%s, score: %d\n", player2.name, player2.score);

    //typedef = reserved keyword that gives an existing datatype a "nickname"
    // line 8 for reference

    char user1[25] = "Samit";
    user user2 = "Ameya"; //does the same thing but user[25] is previously defined

    // Typedef can be used with Structs to not have to write "struct" each time
    // line 10 for reference

    User user3 = {"Samuel", 123456};
    User user4 = {"Alex", 654321};

    //Enums: line 15
    // enum = a user defined type of named integer identifies helps to make a program more readable

    enum Day today = Sun;
    printf("%d\n", today); // enums ARE NOT strings, but they can be treated as ints
    
    if(today == Sun || today == Sat){
        printf("Its party time!!!\n");
    }
    else{
        printf("Fuck my life.\n");
    }


    // Memory = an array of bytes within RAM (street)
    // Memory block = a single unit (byte) within memory, used to hold some value (House)
    // Memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'y';
    char c = 'Z';

    printf("%d byte\n", sizeof(a));
    printf("%d byte\n", sizeof(b));
    printf("%d byte\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    /* Memory addresses are written in Hexadecimal
        (0-9, A-F)
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
    Examples:
        decimal 3 = 3 hexadecimal
        decimal 12 = C hexadecimal
        decimal 15 = F hexadecimal
        decimal 16 = 10 hexadecimal
        decimal 19 = 13 hexadecimal
        decimal 59 = 3B hexadecimal
        Learn about more indepth in other places, its pretty important
    */ 
    
    
    /*
        Pointer = a "variable-like" reference that holds a memory address to another variable,
                  as some tasks are performed more easily with pointers
    
    */

    int age = 21;
    int *pAge = &age;
    // translated to english:
    // "integer(int) pointer(*) named 'pAge' is equal to (=) the address of (&) 'age'"
    printf("address of age: %p\n", &age); // %p indicates the variable is a pointer, and the &a is the Address (&) of a
    printf("value of pAge: %d\n", pAge);

    int value_age = *pAge;
    // translated = "integer named 'y' = the thing pointed to(*) by 'pAge'"
    // if the * is not next to a datatype, then the * is called a dereference
    // dereference: go to the address in the pointer and grab that value

    printf("value of age: %d\n", age);
    printf("value stored at address pAge: %d\n", *pAge);


    

    // pointers can also be intialized without being declared
    int *pAge2 = NULL;
    pAge2 = &age;
    
    /*
        Bitwise operations: special operations used in bit level programming
                            (knowing binary is important for this topic)

        & = AND
        | = OR
        ^ = XOR
        << = Left Shift
        >> = Right Shift
    */
    int x = 6; //  6 = 00000110
    int y = 12; //12 = 00001100
    int z = 0; //  0 = 00000000

    z = x & y; //compares each binary digit, and if both are the 1, then 1 gets put into that digit in z
    //   00000110
    //   00001100
    // = 00000100 = 4
    printf("AND: %d\n", z);

    z = x | y; // if either digit is 1, then 1 gets put into that digit in z
    //   00000110
    //   00001100
    // = 00001110 = 14
    printf("OR: %d\n", z);

    z = x ^ y; // XOR is like OR, however, if both digits are 1, that digit in z stays 0
    //   00000110
    //   00001100
    // = 00001010 = 10
    printf("XOR: %d\n", z);

    int n = 1;
    z = x << n; // Left shift shifts all the digits 'n' digits to the left
    //   00000110
    // = 00001100 = 12
    printf("Left Shift: %d\n", z);

    n = 2;
    z = y >> n; // Right shift shifts all the digits 'n' digits to the right
    //   00001100
    // = 00000011 = 3
    printf("Right Shift: %d\n", z);

    

    return 0;

}