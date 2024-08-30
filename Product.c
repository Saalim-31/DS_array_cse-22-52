#include <stdio.h>

// Function to read array elements
void scan_array(int arr[], int n) {
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to calculate the product of array elements
int product_array(int arr[], int n) {
    int prod = 1;
    for (int i = 0; i < n; i++) {
        prod *= arr[i];
    }
    return prod;
}

int main() {
    int arr[100];
    int num, prod;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &num);

    // Check for valid number of elements
    if (num <= 0 || num > 100) {
        printf("Invalid number of elements. Please enter a number between 1 and 100.\n");
        return 1; // Exit with error code
    }

    scan_array(arr, num);
    prod = product_array(arr, num);

    printf("Product of elements of the array = %d\n", prod);

    return 0;
}
