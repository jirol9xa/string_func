#include <stdio.h>
#include <assert.h>
#define SIZE 50

size_t strlen_s(char *);


int main(void){
    char str[SIZE];
    scanf("%s", str);

    printf("%ld \n", strlen_s(str));
    return 0;
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