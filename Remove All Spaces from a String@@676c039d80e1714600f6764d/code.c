#include<stdio.h>
#include<string.h>
int main(){

    char ch1[30];
    fgets(ch1,sizeof(ch1),stdin);
    char ch2[30];
    int len = strlen(ch1);
    int index = 0;
    for(int i=0; i<len; i++){
        if(ch1[i] != ' '){
            ch2[index++] = ch1[i];
        }
    }
    ch2[index] = '\0'; // Adding this line to indicate to c that the string has ended here
    printf("%s",ch2);
    return 0;
}
