#include <stdio.h>
#include <assert.h>
#define SIZE 50

char * strcpy(char *, const char *);


int main(void){
    char str1[SIZE] = {};
    char str2[SIZE] = {};

    scanf("%s", str2);

    strcpy(str1, str2);

    printf("%s \n", str1);

    return 0;
}

char * strcpy(char * str1, const char * str2){
    assert(str1);
    assert(str2);

    int i = 0;

    for (; i < (SIZE - 1) && (str2[i] != '\0' &&str2[i] != '\n'); i++){
        str1[i] = str2[i];
    }

    if (i < SIZE){
        str1[i] = '\0';
    }

    return str1;
}