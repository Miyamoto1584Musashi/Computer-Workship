
#include <stdio.h>

void swap(int *i, int *j) {
    
    int t = *i;
    *i = *j;
    *j = t;

}

int main(void) {
    
    int m, n;
    
    scanf("%d%d",&m,&n);
    
    int num[m][n], sum[n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d",&num[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        sum[i] = 0;
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[i] += num[j][i];
        }
    }
    
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            if (sum[j] > sum[j + 1]) {
                swap(&sum[j], &sum[j + 1]);
                for (int k = 0; k < m; k++) {
                    swap(&num[k][j], &num[k][j + 1]);
                }
            }
        }
    }
    
    
    printf("Отсортированый массив:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", num[i][j]);
        }
        printf("\n");
    }
    

    for (int i = 0; i < n; i++) {
        printf("%4d", sum[i]);
    }
    
    printf("\n");
    
    return 0;
}
