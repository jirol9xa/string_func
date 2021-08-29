#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#define SIZE 50

char * strcpy(char *, const char *);

char * strdup(const char *);

size_t strlen_s(const char *);

int main(void){
    char str2[SIZE] = {};
    char * str1 = NULL;

    printf("Enter the string \n");
    scanf("%s", str2);

    str1 = strdup(str2);

    printf("%s \n %p", str1, str1);

    free(str1);
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


size_t strlen_s(const char * str){
    assert(str);

    size_t lenght = 0;
    
    while (*str != '\0'){
        lenght++;
        str++;
    
    }
    return lenght;
}


char * strdup(const char * str2){
    char * str1;

    str1 = (char *) malloc(strlen_s(str2) + 1);

    strcpy(str1, str2);

    return str1;
}