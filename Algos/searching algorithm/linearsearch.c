#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return index of the found element
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, size, key);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }

    return 0;
}
