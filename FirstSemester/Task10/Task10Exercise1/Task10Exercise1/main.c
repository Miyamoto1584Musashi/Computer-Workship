#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

int main(void) {

    char str1[N];
    char *word[128];
    char sep[] = " .";  
    char *istr1;
    fgets(str1, N, stdin);
        
    istr1 = strtok(str1, sep);
    int i = 0;
    
    while (istr1 != NULL) {
        word[i] = (char*) malloc(strlen(istr1) * sizeof(char));
        strcpy(word[i], istr1);
        istr1 = strtok(NULL, sep);
        i++;
    }
    
    printf("\n");
    
    for (int j = 0; j < i; j++) {
        printf("%s ", word[j]);
    }
    
    printf("\n");
    
    for (int j = 0; j < i; j++) {
        if (strcmp(word[j], word[i - 2]) != 0) {
            printf("%s ", word[j]);
        }
    }
    
    printf("\n");
    
    for (int j = 0; j < i; j++) {
        if (strcmp(word[j], word[i - 2]) != 0) {
            for (int k = 0; k < strlen(word[j]); k++) {
                printf("%c%c", word[j][k], word[j][k]);
            }
            printf(" ");
        }
        
    }

    printf("\n");
    
    return 0;
}
