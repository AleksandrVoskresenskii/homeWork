#include <stdio.h>

int modaArray(int *A, int lenArray) {
    int counter = 0;
    int maxCounter = 0;
    int maxIndex = 0;

    for (int i = 0; i < lenArray; ++i) {
        counter = 0;
        for (int j = 0; j < lenArray; ++j) {
            if (A[i] == A[j]) {
                counter += 1;
            }
            if (counter > maxCounter) {
                maxCounter = counter;
                maxIndex = i;
            }
        }
    }

    return A[maxIndex];
}

int main(void) {
    int A[11] = {0, 4, 2, 5, 6, 3, 5, 3, 3, 3, 0};
    int arrayLen = sizeof(A) / sizeof(A[0]);
    printf("Moda in Array: %d", modaArray(&A, arrayLen));
}