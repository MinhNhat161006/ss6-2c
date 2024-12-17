#include <stdio.h>

int main() {
    int numbers[5]; 
    int i, evenCount = 0, oddCount = 0; 

    printf("Nhap vao 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;
        }
    }

    printf("So luong so chan: %d\n", evenCount);
    printf("So luong so le: %d\n", oddCount);

    return 0;
}
