#include <stdio.h>

int main() {
    int marks;
    printf(" ",marks);
    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
    }
    else if(80<=marks<90){
        printf("B");
    }
    else if(90<=marks<0){
        printf("C");
    }
    else if(70<=marks<60){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}