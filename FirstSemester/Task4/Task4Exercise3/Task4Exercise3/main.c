


#include <stdio.h>

void circle(int r) {
    
    for (int x = 0; x < (r * 2 + 2); x++) {
        printf("\n");
        for (int y = 0; y < (r * 2 + 2); y++) {
            if ((x - r) * (x - r) + (r - y) * (r - y) <= (r * r)) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
    }
}

int main(void) {
    
    int r;
    printf("Введите r: ");
    scanf("%d",&r);
    
    circle(r);
    return 0;
}
