#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void read_text(char filename[], int N){
    char line[200];
    FILE *fp = fopen(filename, "r");
    for(int i = 0; i < N; i++){
        fgets(line, sizeof(line), fp); //read in at most sizeof(line) characters
        //(including ’\0’) into line.
        printf("%s", line);
    }
    fclose(fp);
    printf("\n");
}

float average(char filename[]){
    char line[2];
    int avg = 0;
    int size = 0;
    FILE *fp = fopen(filename, "r");
    while(fgets(line, sizeof(line), fp)){
        if(*line != '\n'){
            avg += atoi(line);
            size++;
        }
        else{
            continue;
        }
    }
    fclose(fp);
    return avg/size;
}
int main(){
    read_text("Test_text", 3);
    printf("Average: %f\n", average("Test_text"));
    return 0;
}