//
//  main.c
//  Task3Exercise8
//
//  Created by Никита on 05.10.2023.
//

#include <stdio.h>

int main(void) {
    int n;
    printf("Введите число: ");
    scanf("%d",&n);
    int k = 0;
    
    while (n > 0) {
        if (n % 2 != 0) {
            k ++;
        }
        n /= 2;
    }
    
    printf("%d\n", k);
    return 0;
}
