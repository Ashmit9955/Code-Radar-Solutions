#include<stdio.h>
#include<string.h>
int main(){
    char ch1[20];
    char ch2[20];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    ch1[strcspn(ch1,"\n")] = '\0';
    ch2[strcspn(ch2,"\n")] = '\0';

    return 0;
}