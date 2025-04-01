#include <stdio.h>

void printMatrix(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("ma tran khai bao:\n");
    printMatrix(arr1);

    
    int arr2[3][3];
    printf("ma tran 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("ma tran nhap tu ban phim\n");
    printMatrix(arr2);

    return 0;
}

