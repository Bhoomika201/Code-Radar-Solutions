#include <stdio.h>

int main() {
    char ch;
    printf("",ch);
    scanf("%s",&ch);
    if(ch == 'R'){
        printf("Stop");
    }
    else if(ch=='G'){
        printf("Go");
    }
    else if(ch=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}