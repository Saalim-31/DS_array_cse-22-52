#include <stdio.h>

// Function to read array elements
void scan_array(int arr[], int n) {
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to calculate the sum of array elements
int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[100];
    int num, sum;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    // Check for valid number of elements
    if (num <= 0 || num > 100) {
        printf("Invalid number of elements. Please enter a number between 1 and 100.\n");
        return 1; // Exit with error code
    }

    scan_array(arr, num);
    sum = sum_array(arr, num);

    printf("Sum of elements of the array = %d\n", sum);

    return 0;
}
