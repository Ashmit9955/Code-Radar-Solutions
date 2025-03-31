// #include<stdio.h>
// int isPrime(int n){
//     int x = 1;
//     for(int i=2;i<=n-1; i++){
//         if(n%i == 0){
//             x = 0;
//             break;
//         }
//     }
//     if(n == 0 || n == 1){
//         return 0;
//     }else{
//         return x;
//     }
// }



#include <stdio.h>

int main() {
    int n, i, count = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}