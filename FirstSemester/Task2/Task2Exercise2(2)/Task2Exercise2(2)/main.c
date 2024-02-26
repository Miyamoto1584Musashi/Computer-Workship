
#include <stdio.h>
#include <math.h>

int main(void) {

    float x, y;
    
    printf("Введите x и y: ");
    scanf("%f%f",&x,&y);
    
    if (((x > 0) && (y > 0)) || (fabs(x) >= 2) || (fabs(y) >= 2) || ((pow(x, 2) + pow(y, 2)) <= 4))
        printf("Точка не лежит в закрашенной области\n");
    else
        printf("Точка лежит в закрашенной области\n");
    
    
    return 0;
}
