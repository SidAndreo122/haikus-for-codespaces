#include <stdio.h>
int fib_iterative(int n) {
    int a = 0, b = 1, next;
    if (n == 0){
            return a;
        }
        else if (n == 1){
            return b;
        }
    for (int i = 2; i <= n; i++){
        
        next = a + b;
        printf("%d", next);
        a = b;
        b = next;
    }
    return b;
}
int fib_recursive(int n){
    if (n == 0){
            return 0;
        }
        else if (n == 1){
            return 1;
        }
    return (fib_iterative(n - 1) + fib_iterative(n - 2));
}
void main() {
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    printf("Fibonacci (Iterative): %d\n", fib_iterative(n));
    printf("Fibonacci (Recursive): %d\n", fib_recursive(n));
}