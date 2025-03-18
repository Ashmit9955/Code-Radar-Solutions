#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
   int Smallest = arr[0];
   int Ssmallest = arr[0];

   for(int i = 0; i<n; i++){
        if(arr[i] < Smallest){
            Ssmallest = Smallest;
            Smallest = arr[i];
        }else if(arr[i] > Smallest && arr[i] < Ssmallest){
            Ssmallest = arr[i];
        }
   }
    return 0;
}