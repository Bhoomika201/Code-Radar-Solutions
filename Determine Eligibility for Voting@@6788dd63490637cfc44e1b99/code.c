#include <stdio.h>

int main() {
    int age;
    printf(" ",age);
    scanf("%d",&age);
    if(age >= 18){
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}