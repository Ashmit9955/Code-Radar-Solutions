#include<stdio.h>
#include<string.h>
int main(){
    int n;
    float Standard_Price = 0;
    float Premium_Price = 0;
    float VIP_Price = 0;
    scanf("%d",&n);
    typedef struct Movie{
        char name[20];
        char type[20];
        float price;
    }Movie;

    Movie arr[n];
    for(int i=0; i<n ;i++){
        scanf("%s",arr[i].name);
        scanf("%s",arr[i].type);
        scanf("%f",&arr[i].price);
    }   

    for(int i=0; i<n;i++){
        for(int j=0;j<1;j++){
            if(arr[i].type[j] == 'S'){
                Standard_Price += arr[i].price;
            }
        }
    }
    

    
    
    
    printf("Standard: %.2f, ",Standard_Price);
    printf("Premium: %.2f, ",Premium_Price);
    printf("VIP: %.2f",VIP_Price);

    
    return 0;
}