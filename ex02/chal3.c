#include <stdio.h>



int main()

{
    float km;
    printf("Entre km : ");
    scanf("%f", &km);

    float yard  = km * 1093.61;
    printf("%.2f" ,yard);
}