#include <stdio.h>
#include "robbers.h"

int main(void) {
    int number;
    int kol = creating_table();
    
    do {
        
        printf("Menu:\n1 - Show all\n2 - Show the living\n3 - Show the richest\n41 - Information about the robber\n5 - Add a robber\n6 - Kill robber\n7 - Exit\n");
        printf("Enter number: ");
        scanf("%d",&number);
        printf("------------------------------------------------------------------------------------------\n");
        switch(number) {
            case 1:
                show_all(kol);
                printf("\n");
                break;

            case 2:
                show_the_living(kol);
                printf("\n");
                break;
            case 3:
                show_the_richest(kol);
                printf("\n");
                break;
            case 4:
                information_about_the_robber(kol);
                printf("\n");
                break;
            case 5:
                add_robber(kol);
                printf("\n");
                kol++;
                break;
            case 6:
                kill_robber(kol);
                printf("\n");
                break;
            case 7:
                break;
            default:
                printf("No found\n");
                break;
                break;
        }
    } while (number != 7);
    
    return 0;
}
