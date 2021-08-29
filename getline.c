#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#define SIZE 50


char * getline(char *, FILE *, int);


int main(void){
    char file[SIZE] = {};
    char string[SIZE] = {};
    char symbol;
    FILE * fp;

    printf("Enter the name of the file \n");
    scanf("%s", file);
    printf("Enter a separator character \n");
    scanf("%s", &symbol);

    if (!(fp = fopen(file, "r"))){
        printf("Can't open file \n");
    }
    else{
        printf("%s \n", getline(string, fp, symbol));
    }

    return 0;
}


char * getline(char * string, FILE * fp, int symbol){
    char ch = getc(fp);
    char * str = string;

    while (ch != '\0' && ch != symbol && ch != EOF){
        *str = ch;
        
        str++;
        ch = getc(fp);

    }

    *str = '\0';

    return string;

}