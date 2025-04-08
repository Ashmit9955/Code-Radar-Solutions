#include <stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    typedef struct Student{
        int roll;
        char name[20];
        float marks;
    }Student;
    struct Student arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    for(int i=0; i<n; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",arr[i].roll,arr[i].name,arr[i].marks);
        printf("\n");
    }

    return 0;
}