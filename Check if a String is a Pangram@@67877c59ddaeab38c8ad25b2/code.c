#include<stdio.h>
#include<string.h>
int isPan(char* str){
    int len = strlen(str);
    for(int i=0; i<len;i++){
        int count =0;
        for(int j=0; j<len; j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count > 1){
            return 0;
        }
    }
    return 1;
}
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")] = '\0';
    if(isPan(ch)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}