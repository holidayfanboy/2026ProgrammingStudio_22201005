#include <stdio.h>

int main() {
    int a, b; // 1차 함수의 계수 a, b
    int x; // x값

    scanf("%d %d %d", &a, &b, &x);
    int result = a * x + b;
    printf("%d", result);

    return 0;
}