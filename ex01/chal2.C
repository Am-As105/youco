

#include<stdio.h> 

int main()
{
    float C;
    printf("Entre degres Celsius : ");
    scanf("%f", &C);

    float K = C + 273.15;
    printf("%.2f", K);
    return 0;
}