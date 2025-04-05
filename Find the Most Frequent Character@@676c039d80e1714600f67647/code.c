#include<stdio.h>
#include<string.h>
int main(){
    char ch1[50];
    fgets(ch1,sizeof(ch1),stdin);
    int n = strlen(ch1);
    int LargestCount = 0;
    char element = 'A';
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(ch1[i] == ch1[j]){
                count++;
            }
        }
        if(count > LargestCount){
            LargestCount = count;
            element = ch1[i];
        }
        else if(count == LargestCount && ch1[i] < element){
            element = ch1[i];
        }
    }
    printf("%c",element);
    return 0;
}