//write a c program to return the count of elements in a list of numbers which has digit 9

#include <stdio.h>

int main() {
    int n, sum = 0, m, count = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];  // Store the number in a temporary variable
        while (num != 0) {
            m = num % 10;
            sum = sum + m;
            num = num / 10;
            if (m == 9) {
                count++;
                break;  // No need to continue checking if digit 9 is found
            }
        }
    }
    
    printf("Count of elements with digit 9: %d\n", count);
    return 0;
}
