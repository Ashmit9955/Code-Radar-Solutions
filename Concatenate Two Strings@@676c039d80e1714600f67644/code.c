#include<stdio.h>
#include<string.h>
int main(){
    char ch1[20] , ch2[20];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    ch1[strlen(ch1)-1] = '\0';
    ch2[strlen(ch2)-1] = '\0';
    printf("%s",strcat(ch1,ch2));
    return 0;
}