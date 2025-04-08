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
        scanf("%d",arr[i].roll);
        scanf("%s",arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    for(int i=0; i<n;i++){
        if(arr[i].marks >= 85){
            printf("Roll Number: %d, Name: %s, Grade: A\n");
        }
        else if(arr[i].marks >= 70 && arr[i].marks < 84){
            printf("Roll Number: %d, Name: %s, Grade: B\n");
        }
        else if(arr[i].marks < 70){
            printf("Roll Number: %d, Name: %s, Grade: C\n");
        }
    }
    return 0;
}