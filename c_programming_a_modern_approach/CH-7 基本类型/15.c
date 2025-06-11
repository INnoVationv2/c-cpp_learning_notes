#include <stdio.h>

short get_factorial_s(int n) {
    short result = 1;
    for (; n; n--) {
        result *= n;
    }
    return result;
}

int get_factorial_i(int n) {
    int result = 1;
    for (; n; n--) {
        result *= n;
    }
    return result;
}

long get_factorial_l(int n) {
    long result = 1;
    for (; n; n--) {
        result *= n;
    }
    return result;
}

long long get_factorial_ll(int n) {
    long long result = 1;
    for (; n; n--) {
        result *= n;
    }
    return result;
}

float get_factorial_f(int n) {
    float result = 1;
    for (; n; n--) {
        result *= n;
    }
    return result;
}

double get_factorial_d(int n) {
    double result = 1;
    for (; n; n--) {
        result *= n;
    }
    return result;
}

long double get_factorial_ld(int n) {
    long double result = 1;
    for (; n; n--) {
        result *= n;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The short factorial of %d: %d\n", n, get_factorial_s(n));
    printf("The int factorial of %d: %d\n", n, get_factorial_i(n));
    printf("The long factorial of %d: %ld\n", n, get_factorial_l(n));
    printf("The long long factorial of %d: %ld\n", n, get_factorial_ll(n));
    printf("The float factorial of %d: %f\n", n, get_factorial_f(n));
    printf("The double factorial of %d: %lf\n", n, get_factorial_d(n));
    printf("The long double factorial of %d: %Lg\n", n, get_factorial_ld(n));


    return 0;
}
