#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;  // Return index of the found element
        }

        if (arr[mid] < key) {
            left = mid + 1;  // Continue search in the right half
        } else {
            right = mid - 1;  // Continue search in the left half
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = binarySearch(arr, 0, size - 1, key);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }

    return 0;
}
