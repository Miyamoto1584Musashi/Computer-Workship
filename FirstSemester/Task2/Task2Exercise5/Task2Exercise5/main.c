
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int year;
    printf("Введите любой год: ");
    scanf("%d",&year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        printf("Год весокосный\n");
    } else {
        printf("Год не весокосный\n");
    }
    
    return 0;
}
