

#include <stdio.h>

int equal(int n, int s) {
    int number = n, sum = s, d = number % 10;
    
    
    if (number / 10 == 0) {
        return (sum - number == 0);
    } else {
        number /= 10;
        sum -= d;
        return equal(number, sum);
    }
}

int main(void) {
    
    int n, s;
    printf("Введите n и s: ");
    scanf("%d%d",&n,&s);
    
    printf("%d\n", equal(n, s));
    
    return 0;
}
