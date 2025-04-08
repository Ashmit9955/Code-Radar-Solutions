#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);
    typedef struct Student{
        int id;
        char name[20];
        float salary;
    }Student;
    Student arr[n];
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i].id);
        scanf("%s",arr[i].name);
        scanf("%f",&arr[i].salary);
    }
    for(int i=0;i<n; i++){
        if(arr[i].salary < 50000){
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",arr[i].id,arr[i].name,(arr[i].salary)*0.1);
        }else{
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",arr[i].id,arr[i].name,(arr[i].salary)*0.05);

        }
    }
    return 0;
}