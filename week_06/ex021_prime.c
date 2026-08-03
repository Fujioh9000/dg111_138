#include <stdio.h>
#include <math.h>
int main() 
{
    int n;
    int isprime = 1;
    
    printf("Enter positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        isprime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isprime = 0;
                printf("%d is not a prime number.\n", n); 
                break;
            }
        }
    }
    if (isprime) {
        printf("%d is a prime number.\n", n);
    }

}