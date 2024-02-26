
#include <stdio.h>


int main(int argc, const char * argv[]) {
    int N, minutes, seconds;
    
    printf("Введите количество секунд: ");
    scanf("%d",&N);
    
    seconds = (N % 3600) % 60;
    minutes = ((N % 3600) - seconds) / 60;
    
    int tens_minutes = minutes / 10, units_minutes = minutes % 10;
    int tens_seconds = seconds / 10, units_seconds = seconds % 10;
    
    printf("%d%d:%d%d\n", tens_minutes, units_minutes, tens_seconds, units_seconds);

    return 0;
}
