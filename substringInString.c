#include <stdio.h>
#include <string.h>

int countSubstring(char *S, char* S1) {
    int count = 0;
    int lenString = strlen(S);
    int lenSubsting = strlen(S1);
    for (int i = 0; i <= lenString - lenSubsting; ++i) {
        int countLenString = 0;
        for (int j = i; j < i + lenSubsting; ++j) {
            if (S[j] == S1[j - i]) {
                countLenString++;
            }
        }
        if (countLenString == lenSubsting) {
            count++;
        }
    }


    return count;
}

int main() {
    char *S = "asdfjkl;asdfasdfasdf", *S1 = "asdf";
    printf("S1 in S %d times\n", countSubstring(S, S1));

    return 0;
}