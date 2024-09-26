#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

long long int fibonachchiN(int fibNumber) {
    assert(!(fibNumber > 92 || fibNumber < 1));
    long long int fib = 1, lastFib = 1, memmer = 0;
    for (int i = 2; i < fibNumber; ++i) {
        memmer = fib;
        fib += lastFib;
        lastFib = memmer;
    }

    return fib;
}

long long int fibonachchiExp(int fibNumber) {
    assert(!(fibNumber > 92 || fibNumber < 1));
    if (fibNumber == 1 || fibNumber == 2) {
        return 1;
    }
    return fibonachchiExp(fibNumber - 2) + fibonachchiExp(fibNumber - 1);
}

bool test1() {
    if (fibonachchiExp(10) != 55) {
        return 0;
    }
    return 1;
}

bool test2() {
    if (fibonachchiN(10) != 55) {
        return 0;
    }
    return 1;
}

bool test3() {
    if (fibonachchiExp(1) != 1) {
        return 0;
    }
    return 1;
}
bool test4() {
    if (fibonachchiExp(2) != 1) {
        return 0;
    }
    return 1;
}

bool test5() {
    if (fibonachchiN(2) != 1) {
        return 0;
    }
    return 1;
}

bool test6() {
    if (fibonachchiN(1) != 1) {
        return 0;
    }
    return 1;
}

bool test() {
    return test1() * test2() * test3() * test4() * test5() * test6();
}


int main(void) {
    assert(test());
    int fibNumber = 92;
    printf("Input number (>= 0 and <= 90) of fibonachchi: ");
    scanf("%d", &fibNumber);
    printf("O(n): %lld \n", fibonachchiN(fibNumber));
    printf("O(2^n): %lld", fibonachchiExp(fibNumber));
}