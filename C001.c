#include <stdio.h>

int main() {
    int size;
    int stars, blank1, blank2;
    int i, j;
    
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
            blank1 = i;
            blank2 = size*2 - i - 1;
        for (j = 0; j < size*2; j++) {
            if (j == blank1 || j == blank2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size*2; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < size; i++) {
        blank1 = i;
        blank2 = size*2 - i - 1;
        for (j = 0; j < size*2; j++) {
            if (j < blank1 || j > blank2) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    for (i = 0; i < size*2; i++) {
        printf("*");
    }
    
    return 0;
}

/*
*          *
 *        *
  *      *
   *   *
    **
**********
**********
**********
**********
**********
**********
 ********
 ******
 ****
 **
**********
*/