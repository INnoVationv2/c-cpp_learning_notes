#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int largest = 0, smallest = 0;

    if (a > b)largest = a, smallest = b;
    else largest = b, smallest = a;

    if (c > largest)largest = c;
    else if (c < smallest)smallest = c;

    if (d > largest)largest = d;
    else if (d < smallest)smallest = d;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
