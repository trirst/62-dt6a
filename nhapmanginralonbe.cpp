#include <stdio.h>

void sortArray(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int n;
    
    printf("nhap so phan tu: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("nhap cac ptu mang: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sortArray(arr, n);
    
    printf("sau khi sap xep: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

