
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int A, B, C;
    printf("Введите A, B, и С: ");
    scanf("%d%d%d",&A,&B,&C);
    int kol = (A / C) * (B / C);
    int S = (A * B) - kol * C * C;
    printf("Количество квадратов: %d\n", kol);
    printf("Незанятая площадь: %d\n", S);
    
    return 0;
}
