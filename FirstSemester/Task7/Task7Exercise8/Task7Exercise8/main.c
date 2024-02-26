#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 256

int palindrome(int start, int end, char str[]) {
    
    while( str[start] == ' ') {
        start++;
    }
    
    while( str[end] == ' ') {
        end--;
    }
    
    if (start <= end) {
        if (str[start] != str[end]) {
            return 0;
        } else {
            palindrome(start + 1, end - 1, str);
        }
    }

    return 1;
    
}




int main(void)
{
    char str[N];
    fgets(str, N, stdin);
    
    unsigned long len = strlen(str) - 1;
    
    int start = 0, end = (int)len - 1;
    
    if (palindrome(start, end, str) == 1) {
        printf("Палиндром\n");
    } else {
        printf("Не палиндром\n");
    }
    
    return 0;
}
