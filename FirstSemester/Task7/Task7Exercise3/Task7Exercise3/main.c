

#include <stdio.h>

int main(void) {
    
    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d",&n);
    
    int numbers[n + 1];
    
    printf("Введите элементы массива через пробел: ");
    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        numbers[i] = a;
    }
    
    numbers[n - 1] = 0;
    
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i + 1; j < n; j++) {
            if (numbers[i] != 0) {
                while (numbers[i] == numbers[j]) {
                    for (int k = j; k < (n - 1); k++) {
                        numbers[k] = numbers[k + 1];
                    }
                }
                
            }
        }
    }
    
    printf("Новый массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    return 0;
}
