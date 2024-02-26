
#include <stdio.h>

int main(void) {
    
    int n, k = 1;
    
    printf("Введите n: ");
    scanf("%d",&n);
    
    int numbers[n];
    
    printf("Введите элементы массива через пробел: ");

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        numbers[i] = a;
    }
    
    for (int i = 1; i < n; i++) {
        if (numbers[i - 1] < numbers[i]) {
            k++;
        }
    }
    
    printf("%d\n", k);
    
    return 0;
}
