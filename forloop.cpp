#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char b[50];
    int x = 0, y = 0;

    scanf("%s", b);

    for (int i = 0; i <= 50; i++) {
        if (b[i] == '(') {
            x++;
        }
        else if (b[i] == ')') {
            y++;
        }

    }
    if (x == y) printf("YES");
    else printf("NO");


    return 0;
}