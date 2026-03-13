#include <stdio.h>

int main() {
    float c_degree; // 섭씨 온도
    float f_degree; // 화씨 온도

    scanf("%f", &c_degree);
    f_degree = c_degree * 1.8f + 32;
    printf("%.1f", f_degree);

    return 0;
}
