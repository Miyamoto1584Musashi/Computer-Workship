#include "hello.h"

struct robber {
    char name[N];
} robbers[40];

int hello_world(void) {
    FILE *f;
    int i = 0;
    //char str[N];
    
    f = fopen("/Users/nikita/Programming/Computer Workship/SecondSemester/TEST/names", "r");
    while(!feof(f)) {
        fgets(robbers[i].name, N, f);
        i++;
    }
    
    fclose(f);
    
    return i - 1;
    
}
