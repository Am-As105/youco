

#include<stdio.h> 

int main()
{
     char first_name[50];
    char last_name[50];
    int age;
    char sexe[10];
    char adres_email[100];

    printf("Enter your  first name : ");
    scanf("%s", &first_name);

    printf("Enter your last name : ");
    scanf("%s", &last_name);

    printf("Enter age : ");
    scanf("%d", &age);

    printf("Enter sexe : ");
    scanf("%s", &sexe);

    printf("Enter email : ");
    scanf("%s", &adres_email);

    printf("\n");

    printf("your  first name ==>%s\n  ", first_name);
    printf("your  last name ==>%s\n  ", last_name);
    printf("your  age ==> %d\n ", age);
    printf("your  sexe==> %s \n ", sexe);
    printf("your  email adress ==> %s\n ", adres_email);

    return 0;

}