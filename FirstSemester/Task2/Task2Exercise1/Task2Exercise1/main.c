
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int first_year, first_month, first_day;
    int second_year, second_month, second_day;
    
    printf("Введите год, номер месяца и день рождения первого человека: ");
    scanf("%d%d%d",&first_year,&first_month,&first_day);
    
    printf("Введите год, номер месяца и день рождения первого человека: ");
    scanf("%d%d%d",&second_year,&second_month,&second_day);
    
    if ((first_year > second_year) || ((first_year == second_year) && (first_month > second_month)) || ((first_year == second_year) && (first_month == second_month) && (first_day > second_day))) {
        
        printf("Первый старше\n");
    
        
    } else if ((first_year == second_year) && (first_month == second_month) && (first_day == second_day)){
        printf("Они родились в один день\n");
    } else {
        printf("Второй старше\n");
    }
    
    return 0;
}
