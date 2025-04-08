#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    typedef struct Student{
        int roll;
        char name[20];
        float marks;
    }Student;

    Student arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    for(int i=0; i<n; i++){
        printf("Roll Number: %d\n",arr[i].roll);
        printf("Name: %s\n",arr[i].name);
        printf("Marks: %.2f\n",arr[i].marks);
    }
    return 0;
}