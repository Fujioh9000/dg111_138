#include <stdio.h>
#include <math.h>

int main()
{
    int Player_Attack, Enemy_Defense, Hit_Number;
    printf("=== COMBAT SIMULATOR ===\n");
    printf("Enter the Player_Attack dealt: ");
    scanf("%d", &Player_Attack);
    printf("Enter the Hit_Number: ");
    scanf("%d", &Hit_Number);
    printf("Enter the Enemy_Defense: ");
    scanf("%d", &Enemy_Defense);

    int base_damage = Player_Attack - Enemy_Defense;
    int critical_hit = Hit_Number % 5;
    if(critical_hit == 0){
        int critical_damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage = %d *** CRITICAL HIT! x1.5 ***", critical_damage);
    }
    else{
        printf("Damage = %d (Normal)", base_damage);
    }

    return 0;
}