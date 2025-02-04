#include <stdio.h>

int main() {
    int costprice , sellingprice;
    int difference;
    printf(" ",costprice,sellingprice);
    scanf("%d%d",&costprice,&sellingprice);
    difference = sellingprice - costprice;
    if(difference > 0){
        printf("Profit");
    }
    else if(difference < 0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}