#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int freq[n];
    int LargestCount = 0;
    int temp[n];
    for(int i =0; i<n;i++){
        int count = 0;
        for(int j=0; j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        temp[i] = count;
        if(count>LargestCount){
            LargestCount = count;
        }
    }
    int Hfreq[n];
    int index = 0;
    for(int i=0; i<n; i++){
        if(temp[i] == LargestCount){
            Hfreq[index++] = arr[i];
        }
    }
    int Smallest = 5555;
    for(int i=0; i<n; i++){
        if(Hfreq[i] < Smallest  && Smallest > 0){
            Smallest = Hfreq[i];
        }
    }

    printf("%d",Smallest);
    return 0;
}