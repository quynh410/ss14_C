#include <stdio.h>


void bubbleSortAscending(int* arr, int size) {
    int* ptr1;
    int* ptr2;
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (ptr1 = arr; ptr1 < arr + size - i - 1; ptr1++) {
            ptr2 = ptr1 + 1;
            if (*ptr1 > *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}




void bubbleSortDescending(int* arr, int size) {
    int* ptr1;
    int* ptr2;
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (ptr1 = arr; ptr1 < arr + size - i - 1; ptr1++) {
            ptr2 = ptr1 + 1;
            if (*ptr1 < *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);

    int arr[size];

    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    bubbleSortAscending(arr, size);

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    bubbleSortDescending(arr, size);

    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}