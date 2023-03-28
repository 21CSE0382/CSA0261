#include <stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is %d", n, fib(n));

    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}
