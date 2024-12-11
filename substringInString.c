#include <stdio.h>
#include <string.h>

int countSubstring(const char *S, const char *S1) {
    int count = 0;
    int lenString = (int)strlen(S);
    int lenSubsting = (int)strlen(S1);

    // Если длина подстроки больше, чем длина строки, вхождений не будет
    if (lenSubsting > lenString) {
        return 0;
    }

    for (int i = 0; i <= lenString - lenSubsting; ++i) {
        int matched = 1; // флаг, что все символы совпали
        for (int j = 0; j < lenSubsting; ++j) {
            // Как только встретилось несоответствие, прерываем цикл
            if (S[i+j] != S1[j]) {
                matched = 0;
                break;
            }
        }
        if (matched) {
            count++;
        }
    }

    return count;
}

int main() {
    const char *S = "asdfjkl;asdfasdfasdf";
    const char *S1 = "asdf";
    printf("S1 in S %d times\n", countSubstring(S, S1));
    return 0;
}