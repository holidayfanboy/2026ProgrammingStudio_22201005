#include <stdio.h>

int main() {
    int birth_year = 0; // 태어난 년도 
    int age = 0; // 나이

    scanf("%d", &birth_year); // 태어난 년도 입력
    age = 2026 - birth_year;
    printf("%d", age); //결과 출력

    return 0;
}