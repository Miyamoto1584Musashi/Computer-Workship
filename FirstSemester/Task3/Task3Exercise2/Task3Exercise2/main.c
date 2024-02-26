
#include <stdio.h>

int main(void) {
    
    int n;
    int a = 1, b = 1, c = 1, d = a + c;
    printf("Введите n: ");
    scanf("%d",&n);
    

        
    for (int i = 1; i < (n + 1); i++) {
        if ((i == 1) || (i == 2) || (i == 3)) {
            printf("1 ");
        } else {
            printf("%d ", d);
            a = b;
            b = c;
            c = d;
            d = a + c;
            
        }
    }
    printf("\n");
    
    
    return 0;
}
