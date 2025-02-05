#include <stdio.h>

int main() {
    int a,i,flag=0;
    printf("",a);
    scanf("%d",&a);
    if( a <= 1){
        printf("Not Prime");
    }
    else if(a == 2){
        printf("Prime");
    }
    else {
        for (i=2; i*i <=a;i++){
            if(a % i == 0){
                flag = 1;
                break;
            }
        else if(flag == 0){
            printf("Prime");

        }            
        else{
            printf("Not Prime");
    }
    }
    }
    return 0;
}