#include<stdio.h>
#include<string.h>
int main(){
    // the string in c is actually an array of characters..and the end of that array
    // is always '\0' so we can use this to get the length of the array or string
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    int n = strlen(ch);
    ch[n-2] = '\0';
    int x = strlen(ch);
    printf("%d",x);
    return 0;
}