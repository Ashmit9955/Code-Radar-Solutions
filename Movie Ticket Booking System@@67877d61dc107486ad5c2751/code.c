#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int Standard_Price = 0;
    int Premium_Price = 0;
    int VIP_Price = 0;
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
        scanf("%f",&arr[0].price);
    }
    // Finding all type Price
    float smallest = arr[0].price;
    float Largest = arr[0].price;
    for(int i=0; i<n; i++){
            if(smallest > arr[i].price){
                smallest = arr[i].price;
            }
            if(Largest < arr[i].price){
                Largest = arr[i].price;
            }
        }


        for(int i=0;i<n;i++){
            if(arr[i].price != smallest && arr[i].price != Largest){
                Premium_Price = arr[i].price;
            }
            if(arr[i].price == Premium_Price){
                Premium_Price+= arr[i].price;
            }
            else if(arr[i].price == smallest){
                Standard_Price+=arr[i].price;
            }
            else if(arr[i].price == Largest){
                VIP_Price+=arr[i].price;
            }
        }
        printf("Standard: %.2f,",Standard_Price);
        printf("Premium: %.2f,",Premium_Price);
        printf("VIP: %.2f",VIP_Price);

    
    return 0;
}