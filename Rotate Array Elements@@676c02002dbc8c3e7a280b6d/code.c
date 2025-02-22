#include <stdio.h>

void Rotate(int arr[], int n, int k) {
    for (int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int num[] = {1, 2, 3, 4, 5};
    int n = sizeof(num) / sizeof(num[0]);
    int k;
    
    // Taking input for k
    scanf("%d", &k);
    
    // If k is larger than n, we take k % n to avoid unnecessary rotations
    k = k % n;
    
    Rotate(num, n, k);
    
    return 0;
}