#include <stdio.h>
#include <string.h>

int mise_a_jour_tables(int *tables, int taille, int choix){
    for (int i = 0; i < taille; i += 1){
        if (tables[i] == choix){
            tables[i] = 0;
        }
    }
}

int main(){
    int table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char rep[] = "oui";
    int choix_table;

    while (strcmp(rep, "oui") == 0){
        int taille = sizeof(table) / sizeof(table[0]);
        printf("Tables disponibles : ");
        for (int i = 0; i < taille; i += 1){
            printf("%d ", table[i]);
        }
        printf("\nQuel table voulez vous prendre ? ");
        scanf("%d", &choix_table);

        mise_a_jour_tables(table, taille, choix_table);
        
        printf("Voulez vous continuer ? (oui/non) : ");
        scanf("%s", rep);
     }

    return 0;
}