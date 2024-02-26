#include <stdio.h>

void swap(int *i, int *j) {
    
    int t = *i;
    *i = *j;
    *j = t;

}


int main(void) {
    
    int n;
    
    printf("Введите n: ");
    scanf("%d",&n);
    
    int M[n][n + 1];
    double x[n];
    
    printf("Введите матрицу:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            scanf("%d",&M[i][j]);
        }
    }

    
    /*printf("\n");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }*/
    
    
        
    for (int i = 0; i < (n - 1); i++) {
        
        if (M[i][i] == 0) {
            for (int k = i + 1; k < n; k++) {
                if (M[k][i] != 0) {
                    for (int j = 0; j < n + 1; j++) {
                        swap(&M[k][j], &M[i][j]);
                    }
                }
            }
        }
        
        for (int j = i + 1; j < n; j++) {
            int num1 = M[i][i], num2 = M[j][i];
            for (int k = i; k < n + 1; k++) {
                M[j][k] = M[j][k] * num1 - M[i][k] * num2;
            }
        }
    }
    
    for (int i = n - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            int num1 = M[i][i], num2 = M[j][i];
            for (int k = n + 1; k >= 0; k--) {
                M[j][k] = M[j][k] * num1 - M[i][k] * num2;
            }
        }
    }
    
    /*printf("\n");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }*/
    
    for (int i = 0; i < n; i++) {
        x[i] = (double)M[i][n] / M[i][i];
    }
    
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        printf("x%d = %.2f\n", i, x[i]);
    }

    printf("\n");
    /*
3 2 -5 -1
2 -1 3 13
1 2 -1 9
     */
    return 0;
}
