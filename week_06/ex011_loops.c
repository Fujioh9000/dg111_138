#include <stdio.h>
int main() {

    // 1. for loop — เหมาะสมเมื่อทราบจานวนรอบที่แน่นอน
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
        printf("%d ", i);
        printf("Sum: %d\n", sum);
    }
    // 2. while loop — เช็คเงื่อนไขก่อนทางาน
    printf("=====================\n");
    int i = 1;
    sum = 0;
    while (i <= 10) {
        sum += i;
        printf("%d ", i);
        printf("Sum: %d\n", sum);
        i++;
    }
    // 3. do-while loop — ทำงานก่อนอย่างน้อย 1 รอบ แล้วจึงเช็คเงื่อนไข
    printf("=====================\n");
    int a = 1;
    sum = 0;
    do {
        sum += a;
        printf("%d ", a);
        printf("Sum: %d\n", sum);
        a++;
    } while (a <= 10);
    return 0;
}