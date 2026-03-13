#include <stdio.h>

int main() {
    int width, height; // 가로크기, 세로크기
    int area; // 직사각형의 넓이

    scanf("%d %d", &width, &height);
    area = width * height;
    printf("%d", area);

    return 0;
}