#include<stdio.h>

void selection_sort(int a[], int n) {
    if (n == 0) return;

    int max = a[0];
    for (int i = 0; i < n; i++)
        max = max > a[i] ? max : a[i];

    a[n - 1] = max;
    selection_sort(a, n - 1);
}

int main() {
    int n, s[100];
    printf("Enter the number of digits you want to sort: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);

    selection_sort(s, n);
    printf("The sorted elements are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", s[i]);

    return 0;
}
