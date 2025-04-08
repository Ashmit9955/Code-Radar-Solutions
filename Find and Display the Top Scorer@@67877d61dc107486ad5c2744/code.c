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
    int highest = 0;
    int index = 0;
    for(int i=0;i<n; i++){
        if(arr[i].marks > highest){
            highest = arr[i].marks;
            index = i;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",arr[index].roll,arr[index].name,arr[index].marks);
    return 0;
}