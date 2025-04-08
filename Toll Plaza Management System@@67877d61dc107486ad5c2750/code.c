#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    float car_amount = 0;
    float truck_amount = 0;
    float bike_amount = 0;
    typedef struct Toll{
        char car_num[20];
        char type[20];
        float amount;
    }Toll;
    Toll arr[n];
    for(int i=0; i<n; i++){
        scanf("%s",arr[i].car_num);
        scanf("%s",arr[i].type);
        scanf("%d",&arr[i].amount);
    }
    for(int i=0;i<n;i++){
        if(arr[i].type[0] == 'C'){
            car_amount+= arr[i].amount;
        }
        else if(arr[i].type[0] == 'T'){
            truck_amount+= arr[i].amount;
        }
        else if(arr[i].type[0] == 'B'){
            bike_amount+= arr[i].amount;
        }
    }    
    return 0;
}