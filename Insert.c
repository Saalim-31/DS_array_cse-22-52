#include <stdio.h>

int main() {
    int arr[101];  // Increased size to accommodate the new element
    int num, pos, value;

    printf("Enter the size of the array: ");
    scanf("%d", &num);

    // Check for valid array size
    if (num < 0 || num >= 100) {
        printf("Invalid size. Please enter a number between 0 and 99.\n");
        return 1; // Exit with error code
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element (1-based index): ");
    scanf("%d", &pos);

    // Check for valid position
    if (pos < 1 || pos > num + 1) {
        printf("Invalid position. Please enter a number between 1 and %d.\n", num + 1);
        return 1; // Exit with error code
    }

    printf("Enter the value you want to insert: ");
    scanf("%d", &value);

    // Shift elements to the right to make space for the new element
    for (int i = num; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;

    // Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i <= num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
