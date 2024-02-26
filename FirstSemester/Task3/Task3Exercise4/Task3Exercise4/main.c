
#include <stdio.h>

int main(void) {
    
    int number, s = 0;
    printf("Введите число: ");
    scanf("%d",&number);
    
    
    while (number > 9) {
        s = 0;
        while (number > 0) {
            s += number % 10;
            number = number / 10;
        }
        number = s;
    }
    printf("%d\n", s);
    return 0;
}
