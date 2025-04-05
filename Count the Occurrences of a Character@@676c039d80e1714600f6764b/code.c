#include<stdio.h>
#include<string.h>
int main(){
    int count = 0;
    char ch1[20];
    fgets(ch1,sizeof(ch1),stdin);
    char ch2;
    scanf("%c",&ch2);
    for(int i=0;i<strlen(ch1); i++){
        if(ch1[i] == ch2){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}