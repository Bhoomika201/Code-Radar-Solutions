#include <stdio.h>

int main() {
    int a,i,flag=0;
    printf("",a);
    scanf("%d",&a);
    if(a%2!=0){
        printf("Prime");
    }
    else if(a==2){
        printf("Prime");
    }
    else if(a<=1){
        printf("Not Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}