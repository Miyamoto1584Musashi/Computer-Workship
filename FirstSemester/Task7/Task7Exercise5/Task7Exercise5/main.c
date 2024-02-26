
#include <stdio.h>


int main(void) {
    
    int m, n;
    printf("Введите m и n: ");
    scanf("%d%d",&m,&n);
    
    int numbers[n + m];
    
    printf("Введите элементы массива через пробел: ");
    
    for (int i = 0; i < (m + n); i++) {
        int a;
        scanf("%d",&a);
        numbers[i] = a;
    }
    
    
    for (int i = 0; i < n; i++) {
        int last1 = numbers[n + m - 1], last2;
        for (int j = 0; j < (m + n); j++) {
            last2 = numbers[j];
            numbers[j] = last1;
            last1 = last2;
        }
    }
    
    for (int i = 0; i < (m + n); i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    return 0;
}
