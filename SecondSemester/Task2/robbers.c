#include "robbers.h"

struct robber {
    char name[N];
    char life;
    int horses;
    int sabers;
    int rubies;
    int necklaces;
    int wives;
    int coins;
    int wealth;
} Robbers[40];

void print_robber(int i) {
    printf("%8s", Robbers[i].name);
    printf("%3d %4d %4d %4d %4d %4d %8d %8d\n", Robbers[i].life, Robbers[i].horses, Robbers[i].sabers, Robbers[i].rubies, Robbers[i].necklaces, Robbers[i].wives, Robbers[i].coins, Robbers[i].wealth);
}
void create_robber(int i) {
    Robbers[i].life = rand() % 2;
    Robbers[i].horses = rand() % 25;
    Robbers[i].sabers = rand() % 100;
    Robbers[i].rubies = rand() % 100;
    Robbers[i].necklaces = rand() % 100;
    Robbers[i].wives = rand() % 10;
    Robbers[i].coins = rand() % 5000;
    Robbers[i].wealth = Robbers[i].horses * 250 + Robbers[i].sabers * 40 + Robbers[i].rubies * 100 + Robbers[i].necklaces * 130 - Robbers[i].wives * 150 + Robbers[i].coins;
}

int creating_table(void) {
    FILE *f;
    int i = 0;
    
    f = fopen("/Users/nikita/Programming/Computer Workship/SecondSemester/Task2/names", "r");
    
    srand(time(NULL));
    
    while(!feof(f)) {
        char name[N];
        fscanf(f, "%s", name);
        strcpy(Robbers[i].name, name);
        create_robber(i);
        i++;
    }
    fclose(f);

    return i - 1;
}

void show_all(int kol) {
    int result[] = {0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < kol; i++) {
        result[0] += Robbers[i].life;
        result[1] += Robbers[i].horses;
        result[2] += Robbers[i].sabers;
        result[3] += Robbers[i].rubies;
        result[4] += Robbers[i].necklaces;
        result[5] += Robbers[i].wives;
        result[6] += Robbers[i].coins;
        result[7] += Robbers[i].wealth;
        print_robber(i);
    }
    
    printf("   Total%3d %4d %4d %4d %4d %4d %8d %8d", result[0], result[1], result[2], result[3], result[4], result[5], result[6], result[7]);
    
    printf("\n");
}

void show_the_living(int kol) {
    int result[] = {0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < kol; i++) {
        if (Robbers[i].life == 1) {
            result[0] += Robbers[i].life;
            result[1] += Robbers[i].horses;
            result[2] += Robbers[i].sabers;
            result[3] += Robbers[i].rubies;
            result[4] += Robbers[i].necklaces;
            result[5] += Robbers[i].wives;
            result[6] += Robbers[i].coins;
            result[7] += Robbers[i].wealth;
            print_robber(i);
        }
    }
    printf("   Total%3d %4d %4d %4d %4d %4d %8d %8d", result[0], result[1], result[2], result[3], result[4], result[5], result[6], result[7]);
    
    printf("\n");
}

void show_the_richest(int kol) {
    int n = 0;
    for (int i = 0; i < kol; i++) {
        if (Robbers[i].life == 1){
            n = i;
            break;
        }
    }
    
    for (int i = 1; i < kol; i++) {
        if ((Robbers[i].wealth > Robbers[n].wealth) && (Robbers[i].life == 1)) {
            n = i;
        }
    }
    
    print_robber(n);
}

void information_about_the_robber(int kol) {
    char name[N];
    printf("Enter name: ");
    fscanf(stdin, "%s", name);
    for (int i = 0; i < kol; i++) {
        if (strcmp(Robbers[i].name, name) == 0) {
            print_robber(i);
        }
    }
}

void add_robber(int i) {
    printf("Enter name: ");
    scanf("%s", Robbers[i].name);
    create_robber(i);
}



void kill_robber(int kol) {
    char name[N];
    printf("Enter name: ");
    fscanf(stdin, "%s", name);
    for (int i = 0; i < kol; i++) {
        if (strcmp(Robbers[i].name, name) == 0) {
            Robbers[i].life = 0;
            break;
        }
    }
}

