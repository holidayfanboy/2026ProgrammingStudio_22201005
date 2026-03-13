#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2; // x좌표 값
    float y1, y2; // y좌표 값

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.1f", distance);

    return 0;
}