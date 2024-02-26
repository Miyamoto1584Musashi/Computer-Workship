

#include <stdio.h>

int sum_of_digits(int n) {
    int number = n, ost;
    
    if (number > 9) {
        ost = number % 10;
        number /= 10;
        return ost + sum_of_digits(number);
    } else {
        return number % 10;
    }
}


int main(void) {
    
    int n;
    printf("Введите n: ");
    scanf("%d",&n);
    
    printf("%d\n", sum_of_digits(n));
    return 0;
}
