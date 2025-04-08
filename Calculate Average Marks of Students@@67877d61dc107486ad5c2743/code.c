#include <stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    typedef struct student{
        int roll;
        char name[20];
        float marks;
    }Student;
    struct student arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    float sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i].marks;
    }
    printf("%.2f",sum/n);
    return 0;
}