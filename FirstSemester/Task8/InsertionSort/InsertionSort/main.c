
#include <stdio.h>

void swap(int *i, int *j) {
    
    int t = *i;
    *i = *j;
    *j = t;

}

void InsertionSort(int n, int list[], int *nop, int *noc) {
    
    for (int i = 1; i < n; i++) {
        int j = i;
        while ((j > 0) && (list[j - 1] > list[j])) {
            *nop += 1;
            swap(list + j, list + j - 1);
            j--;
        }
        *noc += i - j + 1;
    }
}

int main(void) {
    
    int n;
    
    printf("Введите количество элементов в массиве: ");
    scanf("%d",&n);
    
    int list[n]; // 1 2 4 3 5
    
    printf("Введите элементы массива через пробел: ");
    
    for (int i = 0; i < n; i++) {
        scanf("%d",&list[i]);
    }
    
    int nop = 0; //количество перестановок
    int noc = 0; //количествко сравнений
    
    InsertionSort(n, list, &nop, &noc);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    
    printf("\n");
    
    printf("Количество перестановок: %d\n", nop);
    printf("Количество сравнений: %d\n", noc);
    
    return 0;
}
