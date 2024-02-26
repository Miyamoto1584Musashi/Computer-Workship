
#include <stdio.h>

int main(void) {
    
    float x;
    printf("Введите x: ");
    scanf("%f",&x);
    
    float y = (int)(x);
    

    
    
    if (x < 0) {
        printf("0\n");
    } else if (((int)y % 2) == 0) {
        printf("1\n");
    } else {
        printf("-1\n");
    }

    
    

    return 0;
}
