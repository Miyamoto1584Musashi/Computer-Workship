
#include <stdio.h>

int main(void) {
    
    int n;
    
    printf("Введите любое число от 20 до 69: ");
    scanf("%d",&n);
    
    int x = n % 10;
    
    switch(x)
    {
        case 1:
            printf("%d год\n", n);
            break;
        case 2:

        case 3:

        case 4:
            printf("%d года\n", n);
            break;
        default:
            printf("%d лет\n", n);
            break;
    }
    
    return 0;
}
