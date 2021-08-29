#include <stdio.h>
#include <assert.h>
#define SIZE 50

char * strncpy(char *, const char*, int);
int main(void){
    char str1 [SIZE] = {};
    char str2[SIZE] = {};
    int n = 0;

    printf("Enter the string \n");
    scanf("%s", str2);
    printf("Enter the number of symbols \n");
    scanf("%d", &n);

    strncpy(str1, str2, n);

    printf("%s \n", str1);
    
    return 0;
}


char * strncpy(char * str1, const char * str2, int n){
    assert(str1);
    assert(str2);
    assert(n > 0);

    int i = 0;
    for (; (i < (SIZE - 1) && i < n) && (str2[i] != '\0' && str2[i] != '\n'); i++){
        str1[i] = str2[i];
    }
    
    str1[i] = '\0';

    return str1;
}