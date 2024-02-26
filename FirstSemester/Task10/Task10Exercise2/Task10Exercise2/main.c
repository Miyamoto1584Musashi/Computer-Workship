#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

int main(void) {
    
    char str[N];
    char *word[128];
    char sep[] = " .";
    char *istr;
    
    FILE *file;
    file = fopen("/Users/nikita/Programming/Computer Workship/Task10/Task10Exercise2/Task10Exercise2/test", "r");
    fgets(str, N, file);
    fclose(file);
    
    printf("%s", str);
    
    istr = strtok(str, sep);
    int i = 0;
    
    while (istr != NULL) {
        word[i] = (char*) malloc(strlen(istr) * sizeof(char));
        strcpy(word[i], istr);
        istr = strtok(NULL, sep);
        i++;
    }
    
    printf("\n");
    file = fopen("/Users/nikita/Programming/Computer Workship/Task10/Task10Exercise2/Task10Exercise2/test", "w");
    for (int j = 0; j < i; j++) {
        fprintf(file, "%s ", word[j]);
    }
    
    
    fprintf(file, "\n");
    
    for (int j = 0; j < i; j++) {
        if (strcmp(word[j], word[i - 2]) != 0) {
            fprintf(file, "%s ", word[j]);
        }
    }
    
    fprintf(file, "\n");
    
    for (int j = 0; j < i; j++) {
        if (strcmp(word[j], word[i - 2]) != 0) {
            for (int k = 0; k < strlen(word[j]); k++) {
                fprintf(file, "%c%c", word[j][k], word[j][k]);
            }
            fprintf(file, " ");
        }
        
    }

    fprintf(file, "\n");
    
    fclose(file);
    return 0;
}
