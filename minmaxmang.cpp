#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] < *min) *min = arr[i];
        if(arr[i] > *max) *max = arr[i];
    }
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62, 32, 78, 90, 12};
    int min, max;
    
    findMinMax(arr, 10, &min, &max);
    
    printf("gia tri nho nhat: %d\n", min);
    printf("gia tri lon nhat: %d\n", max);
    
    return 0;
}

