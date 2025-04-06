#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")] == '\0';
    int n = strlen(ch);
    int result = 1;
    for(int i=0; i<n; i++){
        if(n==0){
            result == 1;
            break;
        }
        else if(ch[i] == '1' || ch[i] == '0'){
            result = 1;
        }else{
            result = 0;
            break;
        }
    }
    if(result == 1){
        printf("Yes");
    }else if(result == 0){
        printf("No");
    }
    return 0;
}