#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findRoom(int persons[5]); 
void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc); 

int main(){
        char mn[10][20]; // 남학생명단
        int mr[10];          // 남학생 배정 목록
        char wn[10][20]; // 여학생명단
        int wr[10];          // 여학생 배정 목록
        int person[2][5]={0};   // 2개 층별 5개 호실의 배정 인원 수 
        int mc=0, wc=0; // 인원 합계 (남, 여)
        int mloop;

        srand(time(0));
        printf("===========================================\n");
        printf("생활관 호실 배정 프로그램\n");
        printf("===========================================\n");

        while(1){
                printf("메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ");
                scanf("%d", &mloop);
                if(mloop==1) {
                        if(mc > 9) {
                                printf("에러: 남학생 정원 초과\n");
                                continue;
                        }
                        printf("학생 이름은? > ");
                        scanf("%s", mn[mc]);
                        int roomno = findRoom(person[0]);
                        mr[mc] = 100 + roomno;
                        printf("%s 학생 %d호실 배정되었습니다.\n", mn[mc], mr[mc]);
                        mc++;
                }
                else if(mloop==2) {
                        if(wc > 9) {
                                printf("에러: 여학생 정원 초과\n");
                                continue;
                        }
                        printf("학생 이름은? > ");
                        scanf("%s", wn[wc]);
                        int roomno = findRoom(person[1]);
                        wr[wc] = 200 + roomno;
                        printf("%s 학생 %d호실 배정되었습니다.\n", wn[wc], wr[wc]);
                        wc++;
                }
                else if (mloop == 0) {
                    break;
                }
                else {
                    printf("잘못된 입력입니다.\n메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > \n");
                }
        }

        printf("===========================================\n");
        printf("생활관 호실 배정 결과는 다음과 같습니다.\n");
        printf("===========================================\n");
        printReport(mn, mr, mc, wn, wr, wc);

        return 0;
}

int findRoom(int persons[5]){
    int rnum = rand() % 5;
    
    while(persons[rnum] >= 2)
        rnum = rand() % 5;

    
    if (persons[rnum] >= 2) {
        for(int i=0; i<5; i++) {
            if(persons[i] < 2) {
                rnum = i;
                break;
            }
        }
    }
    
    persons[rnum] = persons[rnum] + 1;
    return rnum + 1;
}

void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc){
    printf("남학생 명단 (%d명)\n", mc);
    
    for(int i=0; i < mc; i++) {
        printf("%d. %s [%d호]\n", i+1, mn[i], mr[i]);
    }

    printf("\n여학생 명단 (%d명)\n", wc);
    
    for(int j=0; j < wc; j++) {
        printf("%d. %s [%d호]\n", j+1, wn[j], wr[j]);
    }

    printf("호실별 배정 명단");
    for(int r = 101; r <= 105; r++) {
        printf("\n%d호: ", r);

        for(int i = 0; i < mc; i++) {
            if(mr[i] == r) {
                printf("%s", mn[i]);
            }
        }
    }

    for(int r = 201; r <= 205; r++) {
        printf("\n%d호: ", r);

        for(int i = 0; i < wc; i++) {
            if(wr[i] == r) {
                printf("%s ", wn[i]);
            }
        }
    }
}
