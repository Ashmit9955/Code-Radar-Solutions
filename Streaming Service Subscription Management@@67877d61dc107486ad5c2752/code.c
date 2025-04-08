#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    float basic =0;
    float premium =0;
    float standard =0;
    int Scount = 0;
    int Bcount = 0;
    int Pcount = 0;
    typedef struct Ott{
        char name[20];
        char plan[20];
        float price;
    }Ott;
    Ott arr[n];
    for(int i=0; i<n; i++){
        scanf("%s",arr[i].name);
        scanf("%s",arr[i].plan);
        scanf("%f",&arr[i].price);
    }
    for(int i=0; i<n; i++){
        if(arr[i].plan[0] == 'S'){
            standard+= arr[i].price;
            Scount++;
        }
        else if(arr[i].plan[0] == 'B'){
            basic+= arr[i].price;
            Bcount++;
        }
        else if(arr[i].plan[0] == 'P'){
            premium+= arr[i].price;
            Pcount++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; ",Bcount,basic);
    printf("Standard: %d Users, Revenue: %.2f; ",Scount,standard);
    printf("Premium: %d Users, Revenue: %.2f",Pcount,premium);

    return 0;
}