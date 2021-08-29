#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define SIZE 50


int puts_s(char *);



int main(void){
    char str[SIZE] = {0};
    scanf("%s", str);
    int d = puts_s(str);
    printf("%d", d-1);
    return 0;
}



int puts_s(char * str){
    assert(str);

    char ch = 0;
    ch = str[0];
    int i;
    
    for ( i = 1; i < (SIZE - 1)  && (ch != '\0' && ch != '\n') ; i ++){
        putchar(ch);
        ch = str[i];
    }
    printf("\n");
    
    return i;
}