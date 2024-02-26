#include <stdio.h>
#include <stdlib.h>

#define n 3

void gaus(float a[n][2*n]) {
    int not_Null_i;
    float coef, koef;
    for (int j = 0; j < n-1; j++) {
        float summ = 0;
        for (int ii = j; ii < n; ii++) {
            summ += abs(a[ii][j]);
            if (a[ii][j] != 0)
                not_Null_i = ii;
        if (summ != 0) {
            if (a[j][j] == 0) {
                float temp;
                for (int jjj = 0; jjj < 2*n; jjj++) {
                    temp = a[j][jjj];
                    a[j][jjj] = a[not_Null_i][jjj];
                    a[not_Null_i][jjj] = temp;
                }
        } for (int i = j + 1; i < n; i++) {
                coef = -1 * a[i][j] / a[j][j];
                for (int k = 0; k < 2*n; k++) {
                    a[i][k] += (coef * a[j][k]);
                }
            }
        }
    }
    }
    for (int j = n-1; j > -1; j--) {
        float summ = 0;
        for (int ii = j; ii > -1; ii--) {
            summ += abs(a[ii][j]);
            if (a[ii][j] != 0)
                not_Null_i = ii;
        }
        if (summ != 0) {
            if (a[j][j] == 0) {
                float temp;
                for (int jjj = 0; jjj < 2*n; jjj++) {
                    temp = a[j][jjj];
                    a[j][jjj] = a[not_Null_i][jjj];
                    a[not_Null_i][jjj] = temp;
                }
            } for (int i = j - 1; i > -1; i--) {
                    coef = -1 * a[i][j] / a[j][j];
                    for (int k = 0; k < 2*n; k++) {
                        a[i][k] += (coef * a[j][k]);
                }
            }
        }
    }
    for (int l = 0; l < n; l++) {
        koef = a[l][l];
        for (int k = 0; k < 2*n; k++) {
            a[l][k] /= koef;
        }
    }
}

int main(void) {
    float two[n][n], edin[n][n], uniq[n][2*n], check[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            check[i][j] = 0;
            if (i == j)
                edin[i][j] = 1;
            else
                edin[i][j] = 0;
            scanf("%f", &two[i][j]);
            uniq[i][j] = two[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = n; j < 2*n; j++) {
            uniq[i][j] = edin[i][j-n];
        }
    }
    gaus(uniq);
    printf("\nПривели к виду:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*n; j++) {
            printf("%.2f ", uniq[i][j]);
        } printf("\n");
    }
    printf("\nОбратная матрица:\n");
    for (int i = 0; i < n; i++) {
        for (int j = n; j < 2*n; j++) {
            printf("%.2f ", uniq[i][j]);
        } printf("\n");
    }
    printf("\nПроверка:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int ii = 0; ii < n; ii++) {
                check[i][j] += two[i][ii] * uniq[ii][j+n];
                } printf("%.2f ", check[i][j]);
        } printf("\n");
    }
    return 0;
}
