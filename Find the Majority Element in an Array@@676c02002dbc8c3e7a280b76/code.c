#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for(int i=0; i<n; i++){
        int count =0;
        for(int j =0; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        temp[i] = count;
    }
    int LargestCount = 0;
    int result = arr[0];
    for(int i =0; i<n; i++){
        if(temp[i] > LargestCount){
            LargestCount = temp[i];
            result = arr[i];
        }
    }
    // Now checking if more than one majority element is there
    // what the logic i will use is if the Largest count of majority element is 3 then in the freq arr 
    // 3 should only occur 3 times and not more than 3 times, so if Largest count appears more than the 
    // Largest count then it means there are more than 1 element which is majority so will print -1
    for(int i =0; i<n ; i++){
        int count2 = 0; 
        if(arr[i] == LargestCount){
            count2++;
            if(count2>LargestCount){
                result = -1;
                break;
            }
        }
    } 
    printf("%d",result);
    return 0;
}