#include <stdio.h>
#include <string.h>
#define N 256


void Simple_Merging_Sort(void){
    FILE *f, *f1, *f2;
    int i, j,  kol = 0, k = 1;
    char str1[N], str2[N];
    
    f = fopen("/Users/nikita/Programming/Computer Workship/Task11/Task11Exercise1/Task11Exercise1/films", "r");
    while(!feof(f)) {
        fgets(str1, N, f);
        //printf("%s", str1);
        kol++;
    }
    fclose(f);
    
    while(k < kol) {
        f = fopen("/Users/nikita/Programming/Computer Workship/Task11/Task11Exercise1/Task11Exercise1/films", "r");
        f1 = fopen("/Users/nikita/Programming/Computer Workship/Task11/Task11Exercise1/Task11Exercise1/films1", "w");
        f2 = fopen("/Users/nikita/Programming/Computer Workship/Task11/Task11Exercise1/Task11Exercise1/films2", "w");
        if (!feof(f)) fgets(str1, N, f); //fscanf(f, "%d", &a1);
        while(!feof(f)) {
            for (int i = 0; i < k && !feof(f) ; i++ ){
                    fprintf(f1, "%s", str1);
                    fgets(str1, N, f);
                    //fscanf(f, "%d", &a1);
            }
            for (int j = 0; j < k && !feof(f) ; j++ ){
                //fprintf(f2, "%d\n", a1);
                fprintf(f2, "%s", str1);
                fgets(str1, N, f);
                //fscanf(f, "%d", &a1);
            }
        }
        
        fclose(f);
        fclose(f1);
        fclose(f2);
        
        f = fopen("/Users/nikita/Programming/Computer Workship/Task11/Task11Exercise1/Task11Exercise1/films","w");
        f1 = fopen("/Users/nikita/Programming/Computer Workship/Task11/Task11Exercise1/Task11Exercise1/films1","r");
        f2 = fopen("/Users/nikita/Programming/Computer Workship/Task11/Task11Exercise1/Task11Exercise1/films2","r");
        if ( !feof(f1) ) fgets(str1, N, f1);//fscanf(f1,"%d",&a1);
        if ( !feof(f2) ) fgets(str2, N, f2);//fscanf(f2,"%d",&a2);
        while ( !feof(f1) && !feof(f2) ) {
            i = 0;
            j = 0;
            while ( i < k && j < k && !feof(f1) && !feof(f2) ) {
                if (strcmp(str1, str2) < 0) {
                    //fprintf(f, "%d\n",a1);
                    //fscanf(f1, "%d", &a1);
                    fprintf(f, "%s", str1);
                    fgets(str1, N, f1);
                    i++;
                } else {
                    //fprintf(f, "%d\n",a2);
                    //fscanf(f2, "%d", &a2);
                    fprintf(f, "%s", str2);
                    fgets(str2, N, f2);
                    j++;
                }
            }
            
            while ( i < k && !feof(f1) ) {
                //fprintf(f, "%d\n",a1);
                //fscanf(f1, "%d", &a1);
                fprintf(f, "%s", str1);
                fgets(str1, N, f1);
                i++;
            }
            while ( j < k && !feof(f2) ) {
                //fprintf(f, "%d\n",a2);
                //fscanf(f2, "%d", &a2);
                fprintf(f, "%s", str2);
                fgets(str2, N, f2);
                j++;
            }
            
            }
            while ( !feof(f1) ) {
                //fprintf(f,"%d\n",a1);
                //fscanf(f1,"%d", &a1);
                fprintf(f, "%s", str1);
                fgets(str1, N, f1);
            }
        
            while ( !feof(f2) ) {
                //fprintf(f, "%d\n",a2);
                //fscanf(f2, "%d", &a2);
                fprintf(f, "%s", str2);
                fgets(str2, N, f2);
            }
        
        fclose(f2);
        fclose(f1);
        fclose(f);
        k *= 2;
    }
}



int main(void) {
        
    Simple_Merging_Sort();
    
    return 0;
}
