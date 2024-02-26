
#include <stdio.h>

int main(void) {
    
    int number, i = 2;
    
    printf("Введите число: ");
    scanf("%d",&number);
    
    while (number >= i * i) {
        while (number % i == 0) {
            number /= i;
            printf("%d ", i);
        }
        i++;
    }
    if (number != 1) {
        printf("%d", number);
    }
    printf("\n");
    
    return 0;
}
