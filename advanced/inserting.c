#include <stdio.h>

void insertSort(int arr[], int n, int key) {
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
}

int main() {
    int arr[20];
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to insert: ");
    scanf("%d", &key);

    insertSort(arr, n, key);

    printf("\nAfter Insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
