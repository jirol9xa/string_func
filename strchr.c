#include <stdio.h>
#include <assert.h>
#define SIZE 50

char * strchr_s(char *, int);

void eatline();

int main(void){
    char str[SIZE] = {0};
    char symbol = 0;

    printf("Введите строку для поиска\n");
    scanf("%s", str);
    eatline();
    printf("Введите искомый символ \n");
    scanf("%c", &symbol);

    printf("%p" ,strchr_s(str, symbol));
    return 0;
}

char * strchr_s(char * str, int symbol){
    assert(str);
    assert(symbol > 0);
    
    while (*str != '\0'){
        if (*str == symbol){
            return str;
        }
        str++;
    }

    return NULL;
}


void eatline(){
    while (getchar() != '\n') ;
}
