
#include <stdio.h>

void reverse_print(int n) {
    //int number = n, digit = number % 10;
    
    printf("%d", n % 10);
    
    if (n > 9) {
        reverse_print(n / 10);
    }
    
    
    
    
    
}

int main(void) {
    int n;
    
    printf("Введите n: ");
    scanf("%d",&n);
    
    reverse_print(n);
    
    printf("\n");
}
