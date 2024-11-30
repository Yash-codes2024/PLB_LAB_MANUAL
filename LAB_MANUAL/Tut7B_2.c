#include <stdio.h>
int fibonacci(int n) 
{
    if (n == 1) 
        return 0;
    if (n == 2) 
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter the term number (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
    } else {
        printf("Fibonacci term %d is = %d\n", n, fibonacci(n));
    }
    return 0;
}
/*Output:
Enter the term number (n): 5
Fibonacci term 5 is = 3*/