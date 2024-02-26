
#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
   int c;
   while (b) {
      c = a % b;
      a = b;
      b = c;
   }
    return fabs(a);
 }


int scm(int num1, int num2) {
    
    return (num1 * num2) / gcd(num1, num2);
    
}



int main(void) {

    int a, b, c;
    
    printf("Введите 3 числа: ");
    scanf("%d%d%d",&a,&b,&c);
    
   
    printf("%d\n", scm(scm(a, b), c));

    return 0;
}
