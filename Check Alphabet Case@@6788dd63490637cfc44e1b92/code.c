#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    int num = ch;
    if(num > 90){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
    return 0;
}