
#include <stdio.h>

int sum_digits(void) {
    int digit;
    
    scanf("%d",&digit);
    
    if (digit != -1) {
        return digit + sum_digits();
    } else {
        return 0;
    }
    
    
    
}

int main(void) {
    
    printf("%d\n", sum_digits());
    
    return 0;
}
