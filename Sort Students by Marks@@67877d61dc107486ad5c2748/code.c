#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    typedef struct Student{
        int roll;
        char name[20];
        float marks;
        int rank;
    }Student;
    Student arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",arr[i].name);
        scanf("%f",&arr[i].marks);
    }

    float marks[n];
    for(int i=0;i<n;i++){
        marks[i] = arr[i].marks;
    }
    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-i-1; j++){
            if(marks[j] > marks[j+1]){
                //swap code;
                float temp = marks[j];
                 marks[j]=marks[j+1] ;
                 marks[j+1]= temp;
            }
        }
    }


    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            if(marks[i] == arr[j].marks){
                printf("Roll Number: %d, Name: %s, Marks: %.2f\n",arr[j].roll,arr[j].name,arr[j].marks);
            }
        }
    }
    return 0;
}