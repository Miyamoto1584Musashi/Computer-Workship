
#include <stdio.h>
#include <math.h>


int main(void) {

    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d",&n);
    
    int numbers[n];
    
    printf("Введите элементы массива через пробел: ");
    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        numbers[i] = a;
    }
    
    int max1, max2 = 0;
    
    if (numbers[0] > numbers[1]) {
        max1 = numbers[1];
    } else {
        max1 = numbers[0];
    }
    
    for (int i = 0; i < n; i++) {

        if (max1 <= numbers[i]) {
            max2 = max1;
            max1 = numbers[i];
        } else if (numbers[i] > max2){
            max2 = numbers[i];
        }
        
        
        
    }
    printf("%d\n", max2);

    
    /*
     -90 -8 -7 -123 -89
     -7 -8 -90 -123 -89
     87243 -90 284 -971 2
     78 12 23 8 28
     -109 -59 146 55 -69
     62 -118 163 -27 -129
     -30 -48 -53 -147 152
     163 -195 124 -152 184
     */
    
        
        
    
    
    return 0;
}
