
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int N;
        
    printf("Введите любое трехзначное число: ");
    scanf("%d",&N);
    
    int number = N / 10 + (N % 10) * 100;
    printf("Новое число: %d\n", number);
    
    
    return 0;
}
