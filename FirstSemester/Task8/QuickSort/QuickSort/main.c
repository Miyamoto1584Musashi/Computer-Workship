
#include <stdio.h>

void swap(int *i, int *j) {
    
    int t = *i;
    *i = *j;
    *j = t;

}

int partition(int numbers[], int start, int end, int *nop, int *noc) {
    
    int pivot = numbers[end];
    
    int pIndex = start;
    
    for (int i = start; i < end; i++) {
        *noc += 1;
        if (numbers[i] <= pivot) {
            if (i != pIndex) {
                *nop += 1;
                swap(numbers + i, numbers + pIndex);
            }
            pIndex++;
        }
    }
    
    if (pIndex != end) {
        swap(numbers + pIndex, numbers + end);
        *nop += 1;
    }
    
    return pIndex;
    
}

void quicksort(int numbers[], int start, int end, int *nop, int *noc) {
    
    
    if (start >= end) {
        return ;
    }
        
    int pivot = partition(numbers, start, end, nop, noc);
    
    quicksort(numbers, start, pivot - 1, nop, noc);
    quicksort(numbers, pivot + 1, end, nop, noc);
}

int main(void) {
    
    int n;
    int nop = 0; //количество перестановок
    int noc = 0; //количествко сравнений
    
    printf("Введите количество элементов массива: ");
    scanf("%d",&n);
    
    int numbers[n];
    
    printf("Введите элементы массива через запятую: ");
    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        numbers[i] = a;
    }
    
    quicksort(numbers, 0, n - 1, &nop, &noc);
    
    
    printf("Отсортированный список: ");
        
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    printf("Количество сравнений: %d\n", noc);
    printf("Количество перестановок: %d\n", nop);
    
    return 0;
}
