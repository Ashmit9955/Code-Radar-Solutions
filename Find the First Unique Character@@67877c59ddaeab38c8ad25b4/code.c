#include<stdio.h>
#include<string.h>
int main(){
    int check = 0; // it is to check if we got any 1 count char or not
    char ch[30];
    scanf("%s",ch);
    int n = strlen(ch);
    for(int i= 0; i<n; i++){
        int count =0;
        for(int j=0;j<n; j++){
            if(ch[i] == ch[j]){
                count++;
            }
        }
        if(count == 1){
                check = 1;
                printf("%c",ch[i]);
                break;
            }
    }
    if(check == 0){
        printf("%c",'-');
    }
    return 0;
}