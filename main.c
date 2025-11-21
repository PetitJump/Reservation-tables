#include <stdio.h>
#include <string.h>

void afficher_tables(int tables){

}

int mise_a_jour_tables(int tables, int choix){

}

int main(){
    int table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char rep[] = "oui";
    int choix_table;

    while (strcmp(rep, "oui") == 0){
        afficher_tables(*table);
        printf("Quel table voulez vous prendre ? ");
        scanf("%d", &choix_table);

        mise_a_jour_tables(*table, choix_table);
        
        printf("Voulez vous continuer ? (oui/non) : ");
        scanf("%s", rep);
     }

    return 0;
}