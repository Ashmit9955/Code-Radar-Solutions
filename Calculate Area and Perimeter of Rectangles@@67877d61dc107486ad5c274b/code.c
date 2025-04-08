#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    typedef struct Rectangle{
        float length;
        float breadth;
    }Rectangle;
    Rectangle arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i].length);
        scanf("%d",&arr[i].breadth);
    }
    for(int i=0; i<n; i++){
        printf("Rectangle %d: Area = %.2f, Perimeter: %.2f",i+1,(arr[i].length * arr[i].breadth),2*(arr[i].length) + 2*(arr[i].breadth));
        printf("\n");
    }
    return 0;
}