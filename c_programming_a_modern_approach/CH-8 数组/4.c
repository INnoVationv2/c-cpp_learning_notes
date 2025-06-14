#include <stdio.h>

#define N 10
#define SIZE(A) (int)(sizeof(A)/sizeof(A[0]))

int main() {
    int a[N], i;
    printf("Enter %d numbers: ", SIZE(a));
    for (i = 0; i < SIZE(a); i++)
        scanf("%d", a + i);

    printf("In reverse order: ");
    for (i = SIZE(a) - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
