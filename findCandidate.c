#include <stdio.h>


int findCandidate(int arr[], int n) {
    int candidate = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }
    return candidate;
}

int isMajority(int arr[], int n, int candidate) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }
    return count > n / 2;
}


int main() {
    int arr[] = {1, 2, 1, 1, 3, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int candidate = findCandidate(arr, n);

    if (isMajority(arr, n, candidate))
        printf("The majority element is: %d\n", candidate);
    else
        printf("No majority element found.\n");

    return 0;
}
