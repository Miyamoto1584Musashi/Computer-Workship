
#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, h, e = 0.001;
    int k = 1;
    
    printf("Введите a, b, h: ");
    scanf("%f%f%f",&a,&b,&h);

    while (a < (b + e)){
        if ((a > -e) && (a < e))
            printf("%d\t%.2f\t****\n", k, a);
        else
            printf("%d\t%.2f\t%.2f\n", k, a, 1/a);
        
        a += h;
        k++;
    }
    return 0;
}
