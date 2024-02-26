
#include <stdio.h>
#include <math.h>



int main(void) {
    
    double x, e, n = 2;
    
    printf("Введите x и e: ");
    scanf("%lf%lf",&x,&e);
    
    double x_current = 1, x_next, s = 1;
    
    
    
    
    x_next = x_current * (((-1) * x * x) / (n * (n - 1)));
    s += x_next;
    n += 2;
    
    while (fabs(x_next - x_current) > e) {
        
        x_current = x_next;
        x_next = x_current * (((-1) * x * x) / (n * (n - 1)));
        s += x_next;
        n += 2;

        
    }
    
    printf("%.20lf\n", s);
    printf("%.20lf\n", cos(x));
    
    
    
    
    return 0;
}
