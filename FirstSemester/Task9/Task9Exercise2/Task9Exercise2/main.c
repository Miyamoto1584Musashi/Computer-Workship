
#include <stdio.h>
#include <math.h>

void spiral1(int m, int n) {
    
    int M[m][n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = fabs(i - j) + 1;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

void spiral2(int m, int n) {
    
    int M[m][n];
    
    int k = 1;
    int top = 0, bottom = m - 1, right = n - 1, left = 0;
    int d = 0;
    
    while (top <= bottom && left <= right) {
        if (d == 0) {
            for (int i = left; i <= right; i++) {
                M[top][i] = k++;
            }
            top++;
        } else if (d == 1) {
            for (int i = top; i <= bottom; i++) {
                M[i][right] = k++;
            }
            right--;
        } else if (d == 2) {
            for (int i = right; i >= left; i--) {
                M[bottom][i] = k++;
            }
            bottom--;
        } else if (d == 3) {
            for (int i = bottom; i >= top; i--) {
                M[i][left] = k++;
            }
            left++;
        }
        
        d = (d + 1) % 4;
        
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    int m, n;
    
    scanf("%d%d",&m,&n);
    
    spiral1(m, n);
    
    printf("\n");
    
    spiral2(m, n);

    return 0;
}
