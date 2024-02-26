
#include <stdio.h>


int max_digit(int *n) {
    int number = *n, d = number % 10, m_d;
    
    if (number / 10 == 0) {
        return number;
        
    } else {
        number /= 10;
        m_d = max_digit(&number);
        if (d > m_d) {
            return d;
        } else {
            return m_d;
        }
    }  max(d,max_digit(number))
}

int main(void) {

    int n;
    
    printf("Введите n: ");
    scanf("%d",&n);
    

    printf("%d\n", max_digit(&n));
    return 0;
}
