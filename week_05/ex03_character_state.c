#include <stdio.h>
#include <math.h>

int main() {
    int max_hp;
    int damage;
    int is_poisoned;
    int attack_count;
    _Bool if_poisoned = 0/1;

    printf("Max HP: ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage);

    printf("Poisoned (0/1): ");
    scanf("%d", &is_poisoned);

    printf("Attack Count: ");
    scanf("%d", &attack_count);

    printf("=== Character Status ===\n");

    int hp = max_hp - damage;
    if (hp < 0) {
        hp = 0;
    } else if (hp <= 0) {
        printf("State: DEAD");
    } else if (hp / (float)max_hp < 0.25) {
        printf("State: CRITICAL");
    } else if (is_poisoned == 1) {
        printf("State: POISONED");
    } else {
        printf("State: NORMAL");
    }

    if (attack_count == 5) {
        printf("State: Ultimate Ready!");
    }
    return 0;
}