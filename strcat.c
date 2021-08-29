#include <stdio.h>
#include <assert.h>
#define SIZE 50

char * strcat(char *, const char *);

size_t strlen_s(char *);


int main(void){
    char str1[SIZE] = {};
    char str2[SIZE] = {};

    printf("Enter the base line \n");
    scanf("%s", str1);
    printf("Enter the line to add \n");
    scanf("%s", str2);

    printf("%s \n", strcat(str1, str2));

    return 0;
}



char * strcat(char * str1, const char * str2){
    assert(str1);
    assert(str2);
    
    int i = 0;
    int string_size = strlen_s(str1);

    for (; (i + string_size) < SIZE - 1 && (str2[i] != '\0' && str2[i] != '\n'); i++){
        str1[i + string_size] = str2[i];
    }

    str1[string_size + i] = '\0';

    return str1;
}



size_t strlen_s(char * str){
    assert(str);

    size_t lenght = 0;
    
    while (*str != '\0'){
        lenght++;
        str++;
    
    }
    return lenght;
}
