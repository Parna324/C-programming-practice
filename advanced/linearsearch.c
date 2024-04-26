#include <stdio.h>

int search(int array[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);

    int result = search(array, n, x);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index: %d\n", result);

    return 0;
}
