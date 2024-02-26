

#include <stdio.h>

float f(int n) {
    
    int a;
    
    if (n > 1) {
        n -= 1;
        scanf("%d",&a);
        return a + (1 / f(n));
    } else {
        scanf("%d",&a);
        return a;
    }
}

int main(void) {
    
    int n;
    
    printf("Введите n: ");
    scanf("%d",&n);
    

    printf("%f\n", f(n));
    
    
    return 0;
}
