#include <stdio.h>



int main()

{
    float km_s;
    printf("Entre km :");
    scanf("%f", &km_s);

    float  m_s = km_s * 0.27778;
    printf("%f" ,m_s);
}