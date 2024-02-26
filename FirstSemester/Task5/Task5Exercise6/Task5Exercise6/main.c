
#include <stdio.h>

void prime_number(int n, int d) {
    int number = n, del = d;
    
    if (del * del <= number) {
        if (number % del == 0) {
            printf("NO\n");
        } else {
            del++;
            prime_number(number, del);
        }
    } else {
        printf("YES\n");
    }
    
}

int main(void) {
    
    int n, d = 2;
    
    printf("Введите n: ");
    scanf("%d",&n);
    
    prime_number(n, d);
    
    return 0;
}
