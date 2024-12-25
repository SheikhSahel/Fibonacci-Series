#include <stdio.h>

// Function prototypes
void fibonacci_recursion(int n, int a, int b);
void fibonacci_iteration(int n);

int main() {
    int n;

    printf("Enter the number of terms for the Fibonacci Series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series using Recursion:\n");
    printf("0 ");
    if (n > 1) {
        fibonacci_recursion(n - 1, 0, 1);
    }

    printf("\nFibonacci Series using Iteration:\n");
    fibonacci_iteration(n);

    return 0;
}

// Recursive function to generate Fibonacci Series
void fibonacci_recursion(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    printf("%d ", b);
    fibonacci_recursion(n - 1, b, a + b);
}

// Iterative function to generate Fibonacci Series
void fibonacci_iteration(int n) {
    int a = 0, b = 1, temp;

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}
