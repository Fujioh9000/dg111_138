#include <stdio.h>
#include <string.h>

int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100){
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1;
    }

    char grade[3];
    float gpa;
    char status[20];

    if (score >= 80){
        strcpy(grade, "A");
        gpa = 4.0;
    } else if (score >= 75){
        strcpy(grade, "B+");
        gpa = 3.5;
    } else if (score >= 70){
        strcpy(grade, "B");
        gpa = 3.0;
    } else if (score >= 65){
        strcpy(grade, "C+");
        gpa = 2.5;
    } else if (score >= 60){
        strcpy(grade, "C");
        gpa = 2.0;
    } else if (score >= 55){
        strcpy(grade, "D+");
        gpa = 1.5;
    } else if (score >= 50){
        strcpy(grade, "D");
        gpa = 1.0;
    } else {
        strcpy(grade, "F");
        gpa = 0.0;
    } 

    if (score >= 50){
        strcpy(status, "Pass");
    } else {
        strcpy(status, "Fail");
    }

    printf("Score: %d -> Grade: %s, GPA: %.1f, Status: %s\n", score, grade, gpa, status);
    return 0;
}