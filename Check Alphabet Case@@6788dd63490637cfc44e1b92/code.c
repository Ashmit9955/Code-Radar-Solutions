#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    int num = ch;
    if(num >= 97 && num <= 122){
        printf("Lowercase");
    }else if (num >=65 && num <= 90){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}