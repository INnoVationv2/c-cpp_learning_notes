#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int cnt = 0;
    for (int val = num; val != 0; val /= 10, ++cnt) {
    }

    printf("The number %d had %d digits", num, cnt);
    return 0;
}
