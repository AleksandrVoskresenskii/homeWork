//#include <stdio.h>
//#include <cstdbool>
//
//bool balanceOfBrackets(char brackets[]) {
//    //char brackets[] = "(45*(5+4) + 18)*13";
//
//    int balanceCount = 0, i = 0;
//
//    while (brackets[i] != '\0') {
//        if (brackets[i] == ')') {
//            balanceCount -= 1;
//        }
//        else if (brackets[i] == '(') {
//            balanceCount += 1;
//        }
//        if (balanceCount < 0) {
//            return 0;
//        }
//        i += 1;
//    }
//    if (balanceCount == 0) {
//        return 1;
//    } else {
//        return 0;
//    }
//
//    return 0;
//}
//
//int main(void) {
//    char brackets[] = "(45*(5+4) + 18)*13";
//
//    if (balanceOfBrackets(&brackets)) {
//        printf("true");
//    }
//    else if (!balanceOfBrackets(&brackets)) {
//        printf("false");
//    }
//
//}