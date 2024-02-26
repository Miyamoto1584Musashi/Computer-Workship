    
#include <stdio.h>

int digits(int n) {
    int kol = 0;
    
    while (n > 0) {
        kol++;
        n /= 10;
    }
    
    return kol;
}

int main(void) {
    
    int n;
    printf("Введите натуральное число: ");
    scanf("%d",&n);
    
    printf("%d\n", digits(n));
    
    return 0;
}
