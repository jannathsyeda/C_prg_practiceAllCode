#include<stdio.h>
struct Person
{
    int age;
    char name[25];
    double salary;
};
int main()
{

    struct Person person[3];
    for(int i=0; i<3; i++)
    {
        printf("Enter Info for %d\n", i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age: ");
        scanf("%d", &person[i].age);
        printf("Enter Salary: ");
        scanf("%lf", &person[i].salary);
    }

    for(int i=0; i<3; i++)
    {
        printf("\nInfo for Person: %d\n", i+1);
        printf("Name: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %.2lf\n", person[i].salary);
    }



    return 0;
}


