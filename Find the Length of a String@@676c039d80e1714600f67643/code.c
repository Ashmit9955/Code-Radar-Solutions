#include<stdio.h>
#include<string.h>
int main(){
    // the string in c is actually an array of characters..and the end of that array
    // is always '\0' so we can use this to get the length of the array or string
    char ch[];
    fgets(ch,sizeof(ch),stdin);
    int length = 0;
    for(int i=0; i<sizeof(ch); i++){
        length++;
    }
    printf("%d",length);
    return 0;
}