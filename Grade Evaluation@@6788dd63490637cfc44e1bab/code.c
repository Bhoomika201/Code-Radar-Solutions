// Your code here...
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'A'){
        printf("Excellent");
    }
    else if(ch == 'B'){
        printf("Good");
    }
    else if(ch == 'C'){
        printf("Average");
    }
    else if(ch == 'D'){
        printf("below Average");
    }
    else if(ch=='F'){
        printf("Fail");
    }
    else{
        printf("");
    }
}
