#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) { 
        return 0; // Not prime
    }
    if (n <= 3) { 
        return 1; // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) { 
        return 0; // Not prime if divisible by 2 or 3
    }
    for (int i = 5; i * i <= n; i += 6) { 
        if (n % i == 0 || n % (i + 2) == 0) { 
            return 0; // Not prime if divisible by i or i+2
        }
    }
    return 1; // Prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
