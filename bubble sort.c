#include <stdio.h>
#define SIZE 100

// Function to input array elements
int inputArray(int arr[]) {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {   // loop should go till n, not 0
        scanf("%d", &arr[i]);
    }
    return n;  // return number of elements
}

// Function to display array elements
void displayArray(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {   // loop till n
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function for Bubble Sort (Ascending)
void bubbleSortAscending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
}

// Function for Bubble Sort (Descending)
void bubbleSortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted in descending order.\n");
}

// Main program
int main() {
    int arr[SIZE];
    int n = 0;
    int choice;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Bubble Sort (Ascending)\n");
        printf("4. Bubble Sort (Descending)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                n = inputArray(arr);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                bubbleSortAscending(arr, n);
                break;
            case 4:
                bubbleSortDescending(arr, n);
                break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
