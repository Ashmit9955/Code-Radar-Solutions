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
    for(int i=0; i<n ;i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    int target ;
    scanf("%d",&target);
    int flag = 0;
    for(int i=0; i<n; i++){
        if(arr[i].roll== target){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",arr[i].roll,arr[i].name,arr[i].marks);
            flag = 1;
            break
        }
    }
    if(flag == 0){
        printf("Student not Found");
    }
    return 0;
}