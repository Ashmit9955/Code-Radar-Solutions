#include<stdio.h>
#include<string.h>

int main(){
    typedef struct Week{
        char day[20];
        float temp;
    }Week;
    Week arr[7];
    float sum = 0;
    for(int i=0; i<7;i++){
        scanf("%s",arr[i].day);
        scanf("%f",&arr[i].temp);
    }
    for(int i=0; i<7;i++){
        sum+= arr[i].temp;
    }
    printf("Average Temperature: %.2f",sum/7);
    return 0;
}