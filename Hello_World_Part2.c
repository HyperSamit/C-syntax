#include <stdio.h>

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

    printf("asdf");
    return 0;

}