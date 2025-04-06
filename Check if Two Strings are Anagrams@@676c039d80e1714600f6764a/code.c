#include<stdio.h>
#include<string.h>
#include<bool.h>
bool isAnagram(char ch1, char ch2){
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    int wc1[26] = {0};
    int wc2[26] = {0};
    for(int i=0; i<26;i++){
        wc1[ch1[i] - 'a']++;
    }

}
int main(){
    char ch1[20];
    char ch2[20];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    ch1[strcspn(ch1,"\n")] = '\0';
    ch2[strcspn(ch2,"\n")] = '\0';
    return 0;
}