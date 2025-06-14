#include<stdbool.h>
#include<stdio.h>
#include<string.h>

void judge_repeat(long n) {
    int count[10] = {0};

    while (n) {
        int val = n % 10;
        count[val]++;
        n /= 10;
    }

    const char str[] = "Repeated digit(s):";
    int str_len = strlen(str); // 计算字符串长度

    printf("%-*s\t", str_len, "Digit:");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", count[i]);
    }
    printf("\n");

    printf("%-*s\t", str_len, str);
    for (int i = 0; i < 10; i++) {
        printf("%d\t", i);
    }
    printf("\n");
}

int main() {
    while (true) {
        long n;
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n == 0) {
            break;
        }
        judge_repeat(n);
    }
    return 0;
}
