#include <stdio.h>
#include <string.h>

void afficher_tables(int tables){

}

int mise_a_jour_tables(int tables, int choix){

}

int main(){
    int table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char rep[] = "oui";

    while (strcmp(rep, "oui") == 0){

        printf("Voulez vous continuer ? (oui/non) : ");
        scanf("%s", rep);
     }

    return 0;
}