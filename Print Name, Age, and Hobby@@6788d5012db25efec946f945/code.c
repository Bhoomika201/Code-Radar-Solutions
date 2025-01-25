#include <stdio.h>

int main() {
    char Name[100],Age[100],Hobby[100];
    printf(" ",Name,Age,Hobby);
    scanf("%s%s%s",&Name,&Age,&Hobby);
    printf("Name: %s\nAge: %s\nHobby: %s",Name,Age,Hobby);
    return 0;
}