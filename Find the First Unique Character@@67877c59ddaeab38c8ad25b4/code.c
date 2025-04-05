#include<stdio.h>
#include<string.h>
int main(){
    char ch[30];
    scanf("%s",ch);
    int n = strlen(ch);
    for(int i= 0; i<n; i++){
        for(int j=0;j<n; j++){
            if(ch[i] == ch[j]){
                count++;
            }
            if(count == 1){
                printf("%c",ch[i]);
                break;
            }
        }
    }
    return 0;
}