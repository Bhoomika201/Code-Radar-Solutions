// Your code here...
#include <stdio.h>

int bubblesort();
int printArray();

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;
}