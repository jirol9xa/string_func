#include <stdio.h>
#include <assert.h>
#define SIZE 50

char * fgets(char *, int, FILE *);


int main(void){
    int n = 0;
    char file[SIZE] = {};
    char str[SIZE] = {};
    FILE * fp = NULL;

    printf("Enter the name of the file \n");
    scanf("%s", file);
    printf("Enter the number of symbols \n");
    scanf("%d", &n);


    if ((fp = fopen(file, "r")) == NULL){
        printf("Can't open file \n");
    }
    else{
        printf("%s \n", fgets(str, n, fp));
    }

    return 0;
}


char * fgets(char * str, int n, FILE * fp){
    assert(str);
    assert(n > 0);
    assert(fp);

    char ch = 0;
    int i = 0;

    for (; i < SIZE - 1 && i < n && (ch = getc(fp)) != EOF; i++){
        str[i] = ch;
    }

    str[i] = '\0';

    return str;
}