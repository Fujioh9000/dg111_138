#include <stdio.h>
int main() {
    char name[50] = "Youthberk Skyfallarm";
    int HP = 100;
    int Attack_Power = 130;
    int Defense = 100;
    int Level = 3;

    printf("===Character Information===:\n");
    printf("Name: %s\n", name);
    printf("Level: %d\n", Level);
    printf("HP: %d\n", HP);
    printf("ATK: %d\n", Attack_Power);
    printf("DEF: %d\n", Defense);

    return 0;
}