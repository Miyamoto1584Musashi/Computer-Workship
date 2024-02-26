
#include <stdio.h>
#include <math.h>

int main(void) {
    
    float x, y;
    
    printf("Введите x и y: ");
    scanf("%f%f",&x,&y);
    
    if ((fabs(x) < 2) && (fabs(y) < 2) && ((fabs(y) + fabs(x) - 2) > 0))
        printf("Точка лежит в закрашенной области\n");
    else
        printf("Точка не лежит в закрашенной области\n");
    
    
    return 0;
}
