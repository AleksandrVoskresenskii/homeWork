#include <stdio.h>


int degreeN(int number, int exponent) {
    
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= number;
    }
    
    return result;
}

int degreeLog(int number, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if ((exponent % 2 == 1) && (exponent > 1)) {
        return degreeLog(number, exponent - 1) * number;
    }
    if (exponent > 1) {
        int localDegree = degreeLog(number, exponent / 2);
        return localDegree * localDegree;
    }

    return number;
}


void test1(void) {
    if (degreeLog(10, 2) == 100) {
        printf("TRUE\n");
    }
}

void test2(void) {
    if (degreeN(10, 2) == 100) {
        printf("TRUE\n");
    }
}

void test3(void) {
    if (degreeLog(10, 0) == 1) {
        printf("TRUE\n");
    }
}

void test4(void) {
    if (degreeN(10, 0) == 1) {
        printf("TRUE\n");
    }
}

void test(void) {
    test1();
    test2();
    test3();
    test4();
}

int main(void) {
    test();
    int number = 1, exponent = 1;
    printf("Number: ");
    scanf("%d", &number);
    printf("Degree: ");
    scanf("%d", &exponent);
    printf("result: %d", degreeN(number, exponent));
    return 0;
}
