
#include <stdio.h>

int main(void) {
    
    float a1, b1, c1, max1, average1, min1;
    float a2, b2, c2, max2, average2, min2;
    
    printf("Введите стороны первого треугольника: ");
    scanf("%f%f%f",&a1,&b1,&c1);
    
    printf("Введите стороны второго треугольника: ");
    scanf("%f%f%f",&a2,&b2,&c2);
    
    if ((a1 > b1) && (c1 > a1)) {
        max1 = c1;
        average1 = a1;
        min1 = b1;
        
    } else if ((a1 > b1) && (c1 < b1)) {
        max1 = a1;
        average1 = b1;
        min1 = c1;

    } else if ((a1 > c1) && (c1 > b1)) {
        max1 = a1;
        average1 = c1;
        min1 = b1;

    } else if ((c1 > b1) && (a1 < b1)) {
        max1 = c1;
        average1 = b1;
        min1 = a1;

    } else if ((a1 > b1) && (c1 < a1)) {
        max1 = b1;
        average1 = a1;
        min1 = c1;

    } else {
        max1 = b1;
        average1 = c1;
        min1 = a1;
    }
    
    if ((a2 > b2) && (c2 > a2)) {
        max2 = c2;
        average2 = a2;
        min2 = b2;
        
    } else if ((a2 > b2) && (c2 < b2)) {
        max2 = a2;
        average2 = b2;
        min2 = c2;

    } else if ((a2 > c2) && (c2 > b2)) {
        max2 = a2;
        average2 = c2;
        min2 = b2;

    } else if ((c2 > b2) && (a2 < b2)) {
        max2 = c2;
        average2 = b2;
        min2 = a2;

    } else if ((a2 > b2) && (c2 < a2)) {
        max2 = b2;
        average2 = a2;
        min2 = c2;

    } else {
        max2 = b2;
        average2 = c2;
        min2 = a2;
    }
    
    
    if (((max2 / max1) == (average2 / average1) || ((a1 == b1 == c1) && (a2 == b2 == c2))))
        printf("Треугольники подобны\n");
    else
        printf("Треугольники не подобны\n");
    return 0;
}
