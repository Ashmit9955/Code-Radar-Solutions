#include<stdio.h>
#include<string.h>
int main(){
    char ch1[20] , ch2[20];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    int x = strlen(ch1);
    int y = strlen(ch2);
    ch1[x-1] = '\0';
    ch2[y] = '\0';
    printf("%s",strcat(ch1,ch2));
    return 0;
}