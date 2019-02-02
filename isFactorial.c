/*
* File: isFactorial.c
* Author: Parker Gabel
* Purpose: Determines whether an input number is a factorial or not.
*/
#include <stdio.h>

/*
 * Recursively determines if a number is a factorial or not
 */
int _isFactorial(int currentFactorial, int nextNumber, int n) {
    if (currentFactorial == n) {
        return nextNumber - 1;
    } else return n < currentFactorial ? 0 : _isFactorial(currentFactorial * nextNumber, nextNumber + 1, n);
}

/*
 * Determines whether an input number is a factorial or not.
 */
int main() {
    int num = 0;
    int fact = 0;
    int retVal;
    while ((retVal = scanf("%d", &num)) > 0) {
        if (num < 0) {
            fprintf(stderr, "Error: input value %d is not positive\n", num);
        } else {
            fact = _isFactorial(1, 2, num);
            if (fact) {
                printf("%d=%d!\n", num, fact);
            } else {
                printf("%d not factorial\n", num);
            }
        }
    }
    if (retVal == 0) {
        fprintf(stderr, "Error: input is not positive");
        return 1;
    }
    return 0;
}