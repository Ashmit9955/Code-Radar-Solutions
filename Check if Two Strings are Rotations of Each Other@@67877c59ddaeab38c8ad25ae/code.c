#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    char ch1[20];
    fgets(ch,sizeof(ch),stdin);
    fgets(ch1,sizeof(ch1),stdin);
    for(int i=0; i<(strlen(ch)/2);i++){
        char temp = ch[i];
        ch[i] = ch[strlen(ch)-1-i];
        ch[strlen(ch)-1-i] = temp;
    }
    if(strcmp(ch,ch1) == 0){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}