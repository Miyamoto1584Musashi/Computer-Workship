
#include <stdio.h>

int main(void) {
    int N, K;
    
    printf("Введите день года и день недели: ");
    scanf("%d%d",&K,&N);
    printf("%d день - это %d день недели\n", K, ((K + N - 2) % 7) + 1);
    
    return 0;
}
