#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    typedef struct Book{
        char book[20];
        char author[20];
        float price;
    }Book;
    Book arr[n];
    for(int i=0; i<n; i++){
        scanf("%s",arr[i].book);
        scanf("%s",arr[i].author);
        scanf("%f",&arr[i].price);
    }
    float target;
    scanf("%f",&target);
    printf("Books above price %.2f\n",target);
    for(int i=0; i<n; i++){
        if(arr[i].price>target){
            printf("Title: %s, Author: %s, Price: %.2f\n",arr[i].book,arr[i].author,arr[i].price);
        }
    }
    return 0;
}