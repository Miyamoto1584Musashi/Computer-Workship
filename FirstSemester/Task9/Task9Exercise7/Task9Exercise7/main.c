
#include <stdio.h>
#include <math.h>

void swap(double *i, double *j) {
    
    int t = *i;
    *i = *j;
    *j = t;

}

int main(void) {

    int n;
    
    printf("Введите n: ");
    scanf("%d",&n);
    
    double M[n][n], T[n][n];
    double I[n][n], N[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                I[i][j] = 1;
            } else {
                I[i][j] = 0;
            }
        }
    }
    
    
    printf("Введите матрицу:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf",&M[i][j]);
            T[i][j] = M[i][j];
        }
    }
        
    for (int i = 0; i < (n - 1); i++) {
        if (M[i][i] == 0) {
            for (int k = i + 1; k < n; k++) {
                if (M[k][i] != 0) {
                    for (int j = 0; j < n + 1; j++) {
                        swap(&M[k][j], &M[i][j]);
                        swap(&I[k][j], &I[i][j]);
                    }
                }
            }
        }
        for (int j = i + 1; j < n; j++) {
            int num1 = M[i][i], num2 = M[j][i];
            for (int k = i; k < n; k++) {
                M[j][k] = M[j][k] * num1 - M[i][k] * num2;
                I[j][k] = I[j][k] * num1 - I[i][k] * num2;
            }
        }
    }
    
    for (int i = n - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            int num1 = M[i][i], num2 = M[j][i];
            for (int k = n - 1; k >= 0; k--) {
                M[j][k] = M[j][k] * num1 - M[i][k] * num2;
                I[j][k] = I[j][k] * num1 - I[i][k] * num2;
            }
        }
    }
        
    
    
    
    return 0;
}
