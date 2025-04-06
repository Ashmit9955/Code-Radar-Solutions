#include<stdio.h>
#include<string.h>
#include<ctype.h>

void fun(char* ch){
    char str[50];
    int n = strlen(ch);
    int num = 0;
    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++){
            if(ch[i] == ch[j]){
                count ++;
            }
        }
        if(count == 1){
            str[num++] = ch[i];
            printf("%c: %d\n",ch[i],count);
        }else{
            int check = 1;
            for(int k=0; k<num;k++){
                if(ch[i] == str[k]){
                    check = 0;
                    break;
                }
            }
            if(check == 1){
                str[num++] = ch[i];
                printf("%c: %d\n",ch[i],count);
            }
        }
    }
}

int main(){
    char ch[30];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")] = '\0';
    fun(ch);
    return 0;
}