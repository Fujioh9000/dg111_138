#include <stdio.h>
int main() {
    char name[50] = "Nattapol Somrith";
    int age = 19;
    float gpa = 2.79f;
    char major[50] = "Programming";

    printf("===Personal Information===:\n");
    printf("Name: %s\n", name);
    printf("Age: %d year\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Major: %s\n", major);

    return 0;
}