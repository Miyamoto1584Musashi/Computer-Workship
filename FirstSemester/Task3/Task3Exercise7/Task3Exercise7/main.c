
#include <stdio.h>
#include <math.h>

int main(void) {
    
    int number, n = 0, sum = 0;
    
    printf("Введите число: ");
    scanf("%d",&number);
    
    for (int i = 0; i < number; i++) {
        n += i;
    }
    
    for (int i = (n * 2 + 1); i < (n + number) * 2; i += 2) {
        printf("%d ", i);
        sum += i;
    }
    
    
    printf(" %d\n", sum);
    return 0;
}
