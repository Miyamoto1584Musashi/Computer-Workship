
#include <stdio.h>

int main(void) {
    
    int n, m;
    
    printf("Введите количество строк и столбцов: ");
    scanf("%d%d",&m,&n);
    
    int num[m][n];
    
    printf("Введите элементы массива: ");
    for (int i = 0;i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d",&num[i][j]);
        }
        
    }
    
    int A[m][n], B[m * n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[(i * n) + j] = num[i][j];
        }
    }
    
    
    /*ОБРАТНО*/
    for (int i = 0; i < m * n; i++) {
        A[i / n][i % n] = B[i];
    }
    
        
    printf("Двумерный массив:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Одномерный массив:\n");
    for (int i = 0; i < n * m; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    
    
    return 0;
}
