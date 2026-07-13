#include <stdio.h>

int main()
{
    float weight, height_cm, bmi;

    printf("weight (kg): ");
    scanf("%f", &weight);

    printf("height (cm):");
    scanf("%f", &height_cm);

    float height_m = height_cm / 100.0;

    bmi = weight / (height_m * height_m);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You have a normal weight.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are overweight.\n");
    }
    else {
        printf("You are obese.\n");
    }

    return 0;
}