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

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    float target;
    int count = 0;
    scanf("%f",&target);
    for(int i=0; i<n; i++){
        if(arr[i].marks > target){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",target,count);
    return 0;
}