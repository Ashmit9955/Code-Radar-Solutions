#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);
    typedef struct Student{
        int id;
        char name[20];
        float bonus;
    }Student;
    Student arr[n];
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i].id);
        scanf("%s",arr[i].name);
        scanf("%f",&arr[i].bonus);
    }
    for(int i=0;i<n; i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",arr[i].id,arr[i].name,(arr[i].bonus)*0.1);
    }
    return 0;
}