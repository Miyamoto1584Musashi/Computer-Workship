
#include <stdio.h>

void swap(int *i, int *j) {
    
    int t = *i;
    *i = *j;
    *j = t;

}

void BubbleSort(int numbers[], int n, int *nop, int *noc) {
    
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            *noc += 1;
            if (numbers[j] > numbers[j + 1]) {
                //swap(numbers, j , j + 1);
                swap(numbers + j, numbers + j + 1);
                *nop += 1;
            }
        }
    }
}

int main(void) {
    
    int n;
    int nop = 0; //количество перестановок
    int noc = 0; //количествко сравнений
    scanf("%d",&n);
    
    int numbers[n];
    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        numbers[i] = a;
    }

    BubbleSort(numbers, n, &nop, &noc);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    printf("%d %d\n", nop, noc);
    
    return 0;
}
