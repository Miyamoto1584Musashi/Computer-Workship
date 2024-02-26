
#include <stdio.h>

double pow2(double x, int n) {

    //double number = x;
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return x * pow2(x, n - 1);
    } else {
        return 1 / pow2(x, -n);
    }
    /*if (degree > 0) {
        if (degree != 0) {
            degree -= 1;
            return number * pow2(number, degree);
        } else {
            return number;
        }
    } else if (degree < 0) {
        if (degree != 0) {
            degree += 1;
            return (1 / number) * pow2(number, degree);
        } else {
            return number;
        }

    } else {
        return 1;
    }*/
}

int main(void) {
    int n;
    
    double x;
    
    printf("Введите x и n: ");
    scanf("%lf%d",&x,&n);
    
    printf("%.15lf\n", pow2(x, n));
    return 0;
}
