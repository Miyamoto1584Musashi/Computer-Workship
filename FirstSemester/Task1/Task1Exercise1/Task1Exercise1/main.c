

#include <stdio.h>

void p(int x, int *y) {
    *y = 5 * x + 3;
    x = *y * 2 - x;
}

int main(void) {
    
    int a = 1, b = 1;
    
    p(a, &a);
    printf("%d %d\n", a, b);
    p(a, &b);
    printf("%d %d\n", a, b);
    
    return 0;
}
