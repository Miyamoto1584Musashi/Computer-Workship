
#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {

    int n;
    printf("Введите количество элементов в массиве: ");
    scanf("%d",&n);
    
    int numbers[n];
    
    printf("Введите элементы массива через пробел: ");
    
    for (int i = 0; i < n; i++) {
        int a;
        
        scanf("%d",&a);
        
        numbers[i] = a;
    }
    
    int maxk = 0, k = 0;
    
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            k++;
        } else {
            k = 0;
        }
        maxk = max(k, maxk);
    }
    
    printf("%d\n", maxk);
    return 0;
}
