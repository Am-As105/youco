

/*
    T < 0°C → Solide (glace)
● 0°C ≤ T < 100°C → Liquide (eau)
● T ≥ 100°C → 
*/
#include<stdio.h> 

int main()
{
    float  T;
    printf("Enter Celsius");
    scanf("%f", &T);
    if (T <  0)
    {
        printf("→ Solide (glace)");
    }
    if( T >= 0 && T < 100 )
    {
        printf("Liquide (eau)");
    }
        
    if (T >=  100)
    {
        printf("Gaz (vapeur)");
    }
    return 0;
}