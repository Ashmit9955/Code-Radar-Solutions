#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    char ch1[20];
    fgets(ch,sizeof(ch),stdin);
    fgets(ch1,sizeof(ch1),stdin);
    int n = strlen(ch);
    for(int i=0; i<(n/2);i++){
        char temp = ch[i];
        ch[i] = ch[n-1-i];
        ch[n-1-i] = temp;
    }
    if(strcmp(ch,ch1)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}