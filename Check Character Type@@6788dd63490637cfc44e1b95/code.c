#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    int n = ch;
    if(n >= 48 && n<= 57){
        printf("Digit");
    }else if(n >= 65 && n<= 90){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("Vowel")
        }else{
            printf("Consonant");
        }
    }else if (n>=90 && n<= 122){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else{
        printf("Special character");
    }
    return 0;
}