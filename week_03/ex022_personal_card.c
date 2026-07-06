#include <stdio.h>
int main() {
    char name[50] = "Nattapol Somrith";
    int age = 19;
    float gpa = 2.79f;
    char major[50] = "Programming";

    printf("===Personal Card===:\n");
    printf("┌─────────────────────────┐\n");
    printf("│Name: %+10s │\n", name);
    printf("│Age: %d year\n", age);
    printf("│GPA: %.2f\n", gpa);
    printf("│Major: %s\n", major);
    printf("└─────────────────────────┘\n");
    return 0;
}