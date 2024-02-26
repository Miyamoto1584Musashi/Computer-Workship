
#include <stdio.h>

void degree_of_number(int number, int degree) {
    int num;
    
    for (int i = 0; i < number; i++) {
        num = i;
        if (degree > 1) {
            for (int j = 0; j < (degree - 1); j++) {
                num = num * i;
            }
            if (num == number) {
                printf("%d = %d в степени %d\n", number, i, degree);
                break;
            } else if (num > number) {
                printf("Без вариантов\n");
                break;
            } else {
                continue;
            }
        } else if (degree == 1) {
            printf("%d = %d в степени %d\n", number, number, degree);
            break;
        } else {
            if (number == 1) {
                printf("Любое число в степени 0 равно 1\n");
                break;
            } else {
                printf("Без вариантов\n");
                break;
            }
        }
    }
}

int main(void) {
    
    int n, d;
    
    printf("Введите число и степень: ");
    scanf("%d%d",&n,&d);
    
    degree_of_number(n, d);
    
   
    return 0;
}
