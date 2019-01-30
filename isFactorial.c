#include <stdio.h>

int _isFactorial(int currentFactorial, int nextNumber, int n) {
    if (currentFactorial == n) {
        return nextNumber - 1;
    } else return n < currentFactorial ? 0 : _isFactorial(currentFactorial * nextNumber, nextNumber + 1, n);
}

int main() {
    int num = 0;
    int fact = 0;
    while (scanf("%d", &num) != EOF) {
        fact = _isFactorial(1, 2, num);
        if(fact) {
            printf("%d=%d!\n", num, fact);
        } else {
            printf("%d not factorial\n", num);
        }
    }
    return 0;
}