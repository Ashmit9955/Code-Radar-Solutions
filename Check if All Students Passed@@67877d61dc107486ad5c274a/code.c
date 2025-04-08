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
    int flag = 1;
    for(int i=0; i<n; i++){
       if(!)(arr[i].marks > 50){
        printf("Not All Passed");
            flag = 0;
       }
    }
    if(flag == 1){
        printf("All Passed");
    }
    return 0;
}