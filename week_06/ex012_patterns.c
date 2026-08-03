#include <stdio.h>
int main() {
    //Traingle pattern
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    //Square pattern
    printf("=====================\n");
    int n, m;
    for (n = 1; n <= 4; n++) {
        for (m = 1; m <= 4; m++) {
            printf("*");
        }
        printf("\n");
    }
    //Diamond pattern
    printf("=====================\n");
    int k, l;
    //ครึ่งบน
    for (k = 1; k <= 3; k++) {
        for (l = 1; l <= 3 - k; l++) {
            printf(" ");
        }
        for (l = 1; l <= 2 * k - 1; l++) {
            printf("*");
        }
        printf("\n");
    }
    //ครึ่งล่าง
    for (int k = 3 - 1; k >= 1; k--) {
        for (int l1 = 1; l1 <= 3 - k; l1++) {
            printf(" ");
        }
        for (int l2 = 1; l2 <= 2 * k - 1; l2++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}