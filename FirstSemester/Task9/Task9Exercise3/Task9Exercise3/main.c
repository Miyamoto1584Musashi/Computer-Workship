
#include <stdio.h>


int main(void) {
    
    int n;
    
    scanf("%d",&n);
    
    int M[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 1;
        }
    }
    
    int start = 0, end = 0, sum = 0;
    
    for (int i = 0; i < (n / 2); i++) {
        for (int j = start; j < (n - end); j++) {
            sum += M[i][j] + M[n - i - 1][n - j - 1];
        }
        start++;
        end++;
    }
    if (n % 2 != 0) {
        sum += M[n / 2][n/ 2];
    }
    
    printf("%d\n", sum);
    
    
    return 0;
}
