#include<stdio.h>
#include<string.h>
int main(){
    int count =0;
    char ch[20];
    fgets(ch , sizeof(ch) , stdin);
    for(int i=0; i<20; i++){
        if(ch[i] != '$'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}