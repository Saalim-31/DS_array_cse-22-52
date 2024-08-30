#include <stdio.h>
#include <limits.h>  // For INT_MIN and INT_MAX

int main() {
    int arr[100];
    int num;

    printf("Enter the size of the array: ");
    scanf("%d", &num);

    if (num <= 0 || num > 100) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;  // Exit with error code
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int max_no = INT_MIN;
    int min_no = INT_MAX;

    // Finding maximum and minimum values
    for (int i = 0; i < num; i++) {
        if (arr[i] > max_no) {
            max_no = arr[i];
        }
        if (arr[i] < min_no) {
            min_no = arr[i];
        }
    }

    printf("Max = %d Min = %d\n", max_no, min_no);

    return 0;
}
