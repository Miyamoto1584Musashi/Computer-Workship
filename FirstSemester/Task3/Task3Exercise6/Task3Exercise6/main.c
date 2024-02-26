
#include <stdio.h>

int main(void) {
    
    int n, d, a = 0;
    
    printf("Введите числитель и знаменатель: ");
    scanf("%d%d",&n,&d);
    
    while (d != 0) {
        if (d > 1) {
            printf("%d ", n / d);
            a = n;
            n = d;
            d = a % d;
        } else if (d == 1) {
            printf("%d", n);
            break;
        }
    }
    printf("\n");

    return 0;
}
