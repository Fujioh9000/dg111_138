#include <stdio.h>

int main()
{
    printf("1. Expression : 10 / 3 = %d\n", 10 / 3);

    printf("2. Expression_1 : 10.0 / 3.0 = %d\n", 10.0 / 3);

    float expression_2 = 10 / 3;
    printf("3. Expression_2 : 10 / 3 = %f\n", expression_2);

    printf("4. Expression_3 : 10 % 3 = %d\n", 10 % 3);

    printf("5. Expression_4 : -7 % 3 = %d\n", -7 % 3);

    printf("6. Expression_5 : 7 % -3 = %d\n", 7 % -3);

    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    printf("1. Expression_01 : 2 + 3 * 4 = %d\n", 2 + 3 * 4);

    printf("2. Expression_02 : (2 + 3) * 4 = %d\n", (2 + 3) * 4);

    printf("3. Expression_03 : 10 - 2 - 3 = %d\n", 10 - 2 - 3);
    
    printf("4. Expression_04 : 2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);
return 0;
}