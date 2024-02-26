#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check(int m[], int a, int len) {
    for (int i = 0; i < len; i++){
        if (a == m[i])
            return 0;
    }
    return 1;
}

int main(void) {

    int m, n;
    printf("Введите n и m: ");
    scanf("%d %d",&n,&m);
    
    int list[n][m], number[m * n], a, k = 0;
    for (int i = 0; i < n * m; i++) {
        number[i] = 0;
    }
    
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a = rand() % 1000;
            list[i][j] = a;
            number[k] = a;
            k++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    int m1, m2;
    printf("Введите m1 и m2: ");
    scanf("%d %d",&m1,&m2);
    
    printf("Элементы с m1 по m2 столбец сверху вниз:\n");
    for (int i = 0; i < n; i++) {
        for (int j = m1; j <= m2; j++){
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    printf("Оставшиеся столбцы снизу вверх:\n");
    for (int i = (n - 1); i >= 0; i--) {
        for (int j = 0; j < m1; j++) {
            printf("%d ", list[i][j]);
        }
        
        for (int j = (m2 + 1); j < m; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

