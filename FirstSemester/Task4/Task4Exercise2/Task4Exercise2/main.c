
#include <stdio.h>

void frame(int m, int n, int d)
{
    for (int i = 0; i < m; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            if ((i < d) || ((m - i)  <= d)) {
                printf("*");
            } else {
                if ((j < d) || ((n - j) <= d)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
    }
    printf("\n");
}


int main(void) {
    
    int m, n, d;
    printf("Введите m, n и d: ");
    scanf("%d%d%d",&m,&n,&d);
    frame(m, n, d);
    return 0;
}
