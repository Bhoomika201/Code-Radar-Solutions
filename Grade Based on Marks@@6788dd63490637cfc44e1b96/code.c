#include <stdio.h>

int main() {
    int marks;
    printf(" ",marks);
    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
    }
    else if(80<=marks){
        printf("B");
    }
    else if(70<=marks){
        printf("C");
    }
    else if(60<=marks){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}
