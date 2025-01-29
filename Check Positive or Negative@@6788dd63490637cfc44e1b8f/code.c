#include <stdio.h>

int main() {
    int a;
    printf("",a);
    scanf("%d",&a);
    switch(a>0){
        case 1:
        printf("Positive");
        break;
        case 0:
        switch(a<0){
            case 0:
            printf("zero");
            break;
            case 1:
            printf("Negative");
            break;
        }
    }
    return 0;
}