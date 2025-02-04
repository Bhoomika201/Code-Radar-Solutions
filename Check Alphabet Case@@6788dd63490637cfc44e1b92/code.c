#include <stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c",&ch);
    if('A'<=ch && ch<='Z'){
        printf("Uppercase");
    }
    else if('a'<=ch && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not a alphabet");
    }  
    return 0;
}