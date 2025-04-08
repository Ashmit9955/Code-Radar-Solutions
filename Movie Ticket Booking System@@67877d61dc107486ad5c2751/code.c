#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int StandardPrice = 0;
    int Premium Price = 0;
    int VIP Price = 0;
    scanf("%d",&n);
    typedef struct Movie{
        char name[20];
        char type[20];
        float price;
    }Movie;

    Movie arr[n];
    for(int i=0; i<n ;i++){
        scanf("%s",arr[0].name);
        scanf("%s",arr[0].type);
        scanf("%f",arr[0].price);
    }
    // Finding all type Price
    int smallest = arr[0].price;
    int Largest = arr[0].price;
    for(int i=0; i<n; i++){
            if(smallest > arr[i].price){
                smallest = arr[i].price;
            }
            if(largest < arr[i].price){
                largest = arr[i].price;
            }
        }
    
    return 0;
}