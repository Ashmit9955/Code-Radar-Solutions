#include<stdio.h>
#include<string.h>
int main(){
    char ch1[20] , ch2[20];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    printf("%s",strcat(ch1,ch2));
    return 0;
}