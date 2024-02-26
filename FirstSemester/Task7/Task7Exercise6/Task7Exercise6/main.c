//
//  main.c
//  Task7Exercise6
//
//  Created by Никита on 26.10.2023.
//

#include <stdio.h>

int BinarySearch(int numbers[], int low, int hight, int g)
{
    int mid = (low + hight) / 2;
    
    if (g == numbers[mid]) {
        return mid;
    } else if (g < numbers[mid]) {
        return BinarySearch(numbers, low, mid - 1, g);
    } else {
        return BinarySearch(numbers, mid + 1, hight, g);
    }
    
    
    
    
}

int main(int argc, const char * argv[]) {
    
    int n, g;
    
    printf("Введите количество элементов в массиве: ");
    scanf("%d",&n);
    
    int numbers[n];
    
    printf("Введите элементы массива через пробел: ");
    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        numbers[i] = a;
    }
    
    printf("Введите элемент, который нужно найти: ");
    scanf("%d",&g);
    
    int low = 0, hight = n - 1;
    
    int index = BinarySearch(numbers, low, hight, g);
    
    printf("Элемент %d имеет индекс %d\n", g, index);
    
    
    
    return 0;
}
