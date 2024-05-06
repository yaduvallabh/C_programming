#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
// Function to calculate the sum of multiples of k below n using arithmetic progression formula
long long sumOfMultiples(long long k, long long n) {
    long long p = (n - 1) / k; // Number of multiples of k below n
    return k * p * (p + 1) / 2; // Sum of multiples of k
}

int main() {
    int t;
    scanf("%d", &t);

    for (int a0 = 0; a0 < t; a0++) {
        long long n;
        scanf("%lld", &n);

        // Calculate the sum of multiples of 3 and 5, and subtract the sum of multiples of 15
        long long sum = sumOfMultiples(3, n) + sumOfMultiples(5, n) - sumOfMultiples(15, n);
        
        printf("%lld\n", sum);
    }

    return 0;
}
