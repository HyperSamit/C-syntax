#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

// Making functions
void birthday(char name[], int age){
    printf("\nHappy Birthday %s!", name);
    printf("\nYou are %d years old", age);
}

double square(double x){
    double y = x*x;
    return y;
}

int findMax(int x, int y){
    // ternary operator = shortcut to if/else when assigning/returning a value
    //return (condition) ? (value if true) : (value if false);
    return     (x > y)   ?        x        :        y;
}

void hello(char *, float);

int main(){

    int x; //declaration
    x = 2; // initialization
    int y = 123; // declaration and init

    int age = 18;
    float gpa = 4.25;
    char grade = 'A'; //needs to be a single character, and needs to be in single quotes
    char name[] = "Bro"; //array of characters, emulates a string, but not the same thing as a string in python

    printf("Hello %s\n", name); // %s is for strings, or char arrays
    printf("You are %d years old.\n",age); // %d is for integers
    printf("Average grade: %c\n", grade); // %c is for single characters
    printf("Your gpa is %f\n", gpa); // %f is for floats



    //Data types

    char a = 'a'; //single character %c
    char b[] = "Bro"; // string of characters %s

    float c = 3.141592; // 4 bytes of memory (32 bits of precision) usually around 6 - 7 digits, %f
    double d = 3.141592653589793; // 8 bytes of memory (64 bits of precision) usually around 15 - 16 digits %lf

    bool e = true; //needs "#include <stdbool.h>", 1 byte, %d, returns 1 for true and 0 for false

    char f = 100; //1 byte (-128 to +127), %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short int h = 32767; // 2 bytes (-32,768 to +32,767), %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535), %d

    int j = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion), %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion), %llu, U so it can be run without warning

    //format specifiers % = defines and formats a type of data to be displayed
    
    // %c = character
    // %s = string(char array)
    // %f = float
    // %lf = double
    // %d = integer
    
    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f, Item 2: $%.2f, Item 3: $%.2f\n",item1, item2, item3);

    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159; //makes the variable a read only value in the memory, all-caps is good practice  

    printf("%f\n", PI);

    /*
    Arithmetic operators

        + = addition
        - = subtraction
        * = multiplication
        / = division
        % = modulus
        ++ = increment (by 1)
        -- = decrement (by 1)

        int x = some number;
        int y = some number;

        int z = x + y;
        int z = x - y;
        int z = x * y;
        float z = x / (float) y;
        int z = x % y;
        x++;
        y++;

    */

   /*
   Augmented assignment opperators: used to replace a statement where an operator takes
                                    a variable as one of its arguements and then assigns
                                    the result back to the same variable
                                    x = x + 1
                                    x += 1
        x = x + 3;
        x += 3;

        x = x - 2;
        x -= 2;

        x = x * 4;
        x *= 4;

        x = x/5;
        x /= 5

        x = x % 2;
        x %= 2;


   */

    //User input

    int age1;
    char name1[25]; // bytes

    printf("whats you name?\n");
    scanf("%s", &name1); //if no white space is included (space)
    fgets(name, 25, stdin); //adds a new line character to the variable, use #include <string.h> to work with strings 
                            //name[strlen(name) - 1] = '\0'; , this code will get rid of the \n
    

    printf("How old are you?\n");
    scanf("%d",&age1);

    printf("Hello %s, how are you?\n", name1);
    printf("You are %d years old\n", age1);


    // Math Functions (must #include <math.h>)
    double A = sqrt(9);
    double B = pow(2,4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100); //absolute value
    double G = log(3);
    double H = sin(45); //in degrees
    double I = cos(45);
    double J = tan(45);

    // If statements 
    int age2;

    printf("\nEnter your age: ");
    scanf("%d", &age2);

    if(age2 >= 18){
        printf("\nYou are signed up!");
    }

    else if(age2 < 0){
        printf("\nYou arent born yet, stfu");
    }

    else{
        printf("\nYou are too young!");
    }

    // Switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many case

    char Grade;

    printf("\nEnter a letter grade: ");
    scanf(" %c", &Grade);

    switch(Grade){
        case 'A':
            printf("\nperfect!");
            break;
        case 'B':
            printf("\nidiot!");
            break;
        case 'C':
            printf("\nfaliure");
            break;
        case 'D':
            printf("\ncmon");
            break;
        default:
            printf("\nPlease enter only valid grade");
    }

    // Logical operators
    // && (AND) checks if two conditions is true
    
    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && sunny == true){
        printf("\nThe weather is good");
    }

    // || (OR) checks if atleast one condition is true

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad");
    }
    else{
        printf("\nThe weaather is good");
    }
    
    // ! (NOT) reverses the state of a condition
    if(!sunny){
        printf("\nIt's cloudy");
    }
    else{
        printf("\nIt's sunny");
    }

    // Calling Funtions
    char name3[] = "bro";
    age = 18;
    birthday(name3, age);

    // Calling Functions with a return
    double num1 = square(9);
    printf("\n%lf", num1);

    int max = findMax(5,4);
    printf("\n%d", max);

    //Function prototype
    //WHAT IS IT
    //Function declaration without a body, before main()
    //Ensures that calls to a function are made using correct arguements
    hello(name1, temp);

    // For loops = repeats a section of code a limited number of times
    for(int i = 1; i <= 10; i++){
        printf("\ntest");
    }

    // While loops = repeats a section of code possible unlimited times
    // WHILE some condition remains true
    // a while loop might not execute at all

    char Name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);

    Name[strlen(Name) - 1] = '\0';

    while(strlen(Name) == 0){
        printf("\nYou did not enter your name.");
        printf("\nWhat's your name?: ");
        fgets(Name, 25, stdin);
        Name[strlen(Name) - 1] = '\0';
    }

    printf("\nHello %s", Name);

    //While loop = checks a condition before beginning to execute
    // Do while loop = runs once before checking the condition

    int number = 0;
    int sum = 0;

    do{
        printf("\nEnter a number above 0: ");
        scanf(" %d", &number);
        if(number > 0){
            sum += number;
            printf("\n%d", sum);
        }
    }while(number > 0 && sum < 10);


    
    // Nested loop = a loop inside of a loop

    int rows;
    int coloumns;
    char symbol;
    
    printf("\nEnter a # of rows: ");
    scanf("%d", rows);

    printf("\nEnter a # of coloums: ");
    scanf("%d", coloumns);

    for (int i = 1; i <= rows; i++){
        for(int j = 1; j <= coloumns; j++){
            printf("%d", j);
        }
    }

    //continue; = skips rest of the code & forces the next iteration of the loop
    //break; = exits a loop/switch

    for (int num = 0; num <= 20; num++){
        if(num = 13){
            break;
        }
        printf("\n%d", num);
    }

    // array = a data structure that can store many values of the same data type
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    // printing arrays
    for(int price = 0; price < 5; price++){
        printf("$%.2lf\n", prices[price]);
    }
    //or use sizeof(), which returns the amount of storage the array has used
    printf("%d", sizeof(prices));
    return 0;
}

void hello(char name[], float temp){
    printf("\nHi %s the temperature is %f", name, temp);
}