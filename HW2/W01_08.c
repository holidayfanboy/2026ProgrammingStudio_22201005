#include <stdio.h>

int main() {
    int megabytes; // 용량(메가바이트 단위)
    float seconds; // 전송시간 (소수점 3자리까지 표시)

    scanf("%d", &megabytes);
    long long total_bits = (long long)megabytes * 1024 * 1024 * 8;
    seconds = (float)total_bits / 100000000.0f;
    printf("%.3f", seconds);

    return 0;
}