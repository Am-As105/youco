

/*
Réalisez un programme qui effectue les quatre opérations arithmétiques de base entre
deux nombres réels saisis par l'utilisateur.
🧮 Opérations :
● Addition
● Soustraction
● Multiplication
● Division
*/
#include<stdio.h> 
int atoi(char *str)
{
    int i  = 0;
    int total = 0;
    while (str[i] <= 57 && str[i] >= 48)
    {
        total = total * 10 + (str[i] - '0');
        i++;
    }
    return total;
    
}
int main(int ac , char **av)
{
    int i = 0;
    
    if (av[2][i] == '+')
    {
        printf("%d", atoi(av[1]) + atoi(av[3]));  
    }
    if (av[2][i] == '-')
    {
        printf("%d", atoi(av[1]) - atoi(av[3]));
    }
    if (av[2][i] == '/')
    {
        printf("%d", atoi(av[1]) / atoi(av[3]));  
    }
    if (av[2][i] == '*')
    {
        printf("%d", atoi(av[1])  * atoi(av[3]));
    }
    
    return 0;
}