#include <stdio.h>

int main() {
    int height = 0; // 신장(cm)
    int weight = 0; // 체중(kg)
    float bmi = 0.0f; // 비만도 수치

    scanf("%d %d", &height, &weight);

    float fnum = height * 0.01f; // cm -> m
    bmi = weight / (fnum * fnum); //weight (kg) / (height (m) squared).

    printf("%.1f", bmi);

    return 0;
}
