//
// Created by Yangyu on 2023/3/7.
//



#include <stdio.h>
#include <string.h>


int find(char *str1, char *str2, int an, int bn) {
    int result = 0;
    for (int i = 0; i < an - bn + 1; ++i) {
        for (int j = 0; j < bn; ++j) {
            if (str1[i + j] == str2[j]) {
                if (j == bn-1) {
                    result++;
                }
            }else {
                break;
            }
        }
    }
    return result;
}

int main() {
    char a[50] = "hellohellohello";
    char b[50] = "llo";
    int an = strlen(a), bn = strlen(b);
    printf("%d", find(a, b, an, bn));
    return 0;
}