
#include <stdio.h>

void cancel(int *num, int *den) {
    
    
    for (int i = *den; i > 1; i -= 1) {
        if ((*num % i == 0) && (*den % i == 0)) {
            *num /= i;
            *den /= i;
        }
    }
    
    
    
}

int main(void) {
    
    int a, b, c, d;
    
    printf("Введите a, b, c, d: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    int n1 = a, n2 = b, n3 = c, n4 = d;
    int num = n1 * n4 + n2 * n3, den = n2 * n4;
    
    cancel(&num, &den);
    
    printf("%d/%d\n", num, den);
    

    return 0;
}
