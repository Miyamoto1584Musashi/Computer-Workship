
#include <stdio.h>

void line(int row, int n)
{
    if ((row == 0) || (row == (n - 1))) {
        for (int i = 0; i < n; i++) {
            printf(" *");
        }
    } else {
        for (int i = 0; i < n; i++) {
            if ((i == 0) || (i == (n - 1))) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
    }
        
    printf("\n");
    
}

int main(void) {
    
    int n;
    
    printf("Введите натуральное число: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        line(i, n);
    }
    
    
    return 0;
}
