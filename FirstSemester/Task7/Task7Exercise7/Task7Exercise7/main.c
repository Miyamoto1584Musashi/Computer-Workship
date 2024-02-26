
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int * unification(int num1[], int num2[], int m, int n) {
    
    int *pa, k_m = 0, k_n = 0, k = 0;
    
    pa = (int*) malloc((n + m) * sizeof(int));

    while ((k_n < n) && (k_m < m)) {
        if (num1[k_m] <= num2[k_n]) {
            pa[k] = num1[k_m];
            k_m++;
            k++;
        } else {
            pa[k] = num2[k_n];
            k_n++;
            k++;
        }
    }
    

    if (k_n == n) {
        for (int i = k_m; i < m; i++) {
            pa[k] = num1[i];
            k++;
        }
    } else {
        for (int i = k_n; i < n; i++) {
            pa[k] = num2[i];
            k++;
        }
    }
        
        
    return pa;

}

int main(void) {

    int m, n;
    printf("Введите m и n: ");
    scanf("%d%d",&m,&n);
    
    int *num1, *num2;
    
    num1 = (int*) malloc(m * sizeof(int));
    num2 = (int*) malloc(n * sizeof(int));
    
    printf("Введите элементы массива m: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", num1 + i);
    }
    
    printf("Введите элементы массива n: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", num2 + i);
    }
    
    
    int *pp = unification(num1, num2, m, n);
    
    for (int i = 0; i < (n + m); i++) {
        printf("%d ", pp[i]);
    }
    
    printf("\n");

    
    return 0;
}
