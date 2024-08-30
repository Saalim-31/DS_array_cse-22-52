#include <stdio.h>

int main() {
    int A[10000], s, e, flag = 0;

    // Asking user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &s);

    // Ensure the size is within the valid range
    if (s <= 0 || s > 10000) {
        printf("Invalid array size.\n");
        return 1; // Exit with error code
    }

    // Getting array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < s; i++) {
        scanf("%d", &A[i]);
    }

    // Displaying array elements
    printf("Elements of the array are: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Asking user for the element to be deleted
    printf("Enter the element to be removed/deleted: ");
    scanf("%d", &e);

    // Deleting the element
    for (int i = 0; i < s; i++) {
        if (A[i] == e) {
            // Shift elements to the left to remove the element
            for (int j = i; j < s - 1; j++) {
                A[j] = A[j + 1];
            }
            s--; // Decrease the size of the array
            flag = 1;
            break; // Exit loop after the element is deleted
        }
    }

    if (flag == 0) {
        printf("Element not found.\n");
    } else {
        // Displaying the updated array
        printf("Elements of the array after deletion: ");
        for (int i = 0; i < s; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    }

    return 0;
}
