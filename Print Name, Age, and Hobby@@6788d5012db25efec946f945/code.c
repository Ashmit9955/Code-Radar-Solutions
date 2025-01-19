#include <stdio.h>

int main() {
    char name[100],hobby[100];
    int age;
    scanf("%s%d%s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s\n",name,age,hobby);
    return 0;
}