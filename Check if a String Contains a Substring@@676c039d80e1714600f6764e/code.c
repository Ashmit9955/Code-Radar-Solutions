#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch1[40];
    fgets(ch1,sizeof(ch1),stdin);
    ch1[strcspn(ch1,"\n")] = '\0';
    char ch2[40];
    fgets(ch2,sizeof(ch2),stdin);
    ch2[strcspn(ch2,"\n")] = '\0';
    int n1 = strlen(ch1);
    int n2 = strlen(ch2);
    for(int i=0; i<n1; i++){
        int result = 1;
        int num =i;
        for(int j=0; j<n2; j++){
            if(ch1[num++] != ch2[j]){
                result = 0;
                break;
            }
        }
        if(result == 1){
        printf("Yes");
        break;
        }else{
        printf("No");
        break;
        }
    }
    
    return 0;
}