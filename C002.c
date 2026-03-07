#include <stdio.h>

#define MAX_STUDENT 48
#define MAX_SEX 24

int main() {
    int person[4][3]; // 4개 층별 3개 호실의 점호 인원 수 
    int sum[3] = {0}; // 점호 인원수 합계 (남, 여, 전체)
    float ratio[3] = {0}; //점호 인원 수 비율 (남, 여, 전체)
    int i, j; // 반복문을 위한 변수 
    
    //인원 수 입력
    for (i = 0; i < 4; i++) {
        if (i == 0)
        {
            printf("Check room (Men)\n");
        }
        else if (i == 2)
        {
            printf("Check room (Women)\n");
        }
        for (j = 0; j < 3; j++) {
            int num = 0;
            printf("Room #%d%02d > ", i+1, j+1);
            scanf("%d", &num);
            while (num > 4) {
                printf("Room Capacity is 4 students. Please enter again.\n");
                scanf("%d", &num);
            }
                person[i][j] = num;
        }
    }

    //인원 수 합 계산
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum[2] += person[i][j];
            if (i < 2) {
                sum[0] += person[i][j];
            }
            else {
                sum[1] += person[i][j];
            }
        }
    }

    //인원 수 비율 및 결과 출력
    printf("Check Result\n");
    for (i = 0; i < 3; i++) {
        if (i == 0)
        {
            ratio[i] = (float)sum[i] / MAX_SEX;
            printf("Men: %d/%d (%.1f%%)\n", sum[i], MAX_SEX, ratio[i]*100);
        }
        else if (i == 1)
        {
            ratio[i] = (float)sum[i] / MAX_SEX;
            printf("Women: %d/%d (%.1f%%)\n", sum[i], MAX_SEX, ratio[i]*100);
        }
        else
        {
            ratio[i] = (float)sum[i] / MAX_STUDENT;
            printf("Total: %d/%d (%.1f%%)\n", sum[i], MAX_STUDENT, ratio[i]*100);
        }
    }
    
    return 0;
}