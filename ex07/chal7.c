#include <stdio.h>



int main()
{
    int num1;
    int num2;
    int num3;
    printf("Entre num1 : ");
    scanf("%d", &num1);
    printf("Entre num2 : ");
    scanf("%d", &num2);
    printf("Entre num3 : ");
    scanf("%d", &num3);
    int total = 5 + 3 + 2;

   int result = (num1 * 2 + num2 * 3 + num3 * 5) / total;
   printf("%d", result );

}